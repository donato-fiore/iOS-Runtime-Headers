// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDDATA_H
#define CHDDATA_H


#import <Foundation/Foundation.h>

#import "CHDDataValuesCollection.h"
#import "CHDFormula.h"
#import "EDResources.h"

@interface CHDData : NSObject {
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    NSUInteger mContentFormatId;
    NSUInteger mDataValueIndexCount;
    EDResources *mResources;
}




+(id)dataWithDataPointCount:(NSUInteger)arg0 resources:(id)arg1 ;
+(id)dataWithResources:(id)arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)averageDataPointDecimalCount;
-(NSUInteger)contentFormatId;
-(NSUInteger)countOfCellsBeingReferenced;
-(NSUInteger)dataValueIndexCount;
-(id)contentFormat;
-(id)dataValues;
-(id)description;
-(id)firstValueContentFormatWithWorkbook:(id)arg0 ;
-(id)formula;
-(id)initWithDataPointCount:(NSUInteger)arg0 resources:(id)arg1 ;
-(id)initWithResources:(id)arg0 ;
-(struct CGPoint )minMaxValues;
-(void)setContentFormat:(id)arg0 ;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setDataValueIndexCount:(NSUInteger)arg0 ;
-(void)setFormula:(id)arg0 chart:(id)arg1 ;


@end


#endif