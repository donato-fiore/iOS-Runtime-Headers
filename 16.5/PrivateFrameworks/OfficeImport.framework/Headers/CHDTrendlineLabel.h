// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDTRENDLINELABEL_H
#define CHDTRENDLINELABEL_H


#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "CHDFormula.h"
#import "OADGraphicProperties.h"
#import "EDString.h"

@interface CHDTrendlineLabel : NSObject {
    EDResources *mResources;
    CHDFormula *mName;
    NSUInteger mContentFormatId;
    BOOL mContentFormatDerived;
    BOOL mGeneratedText;
    BOOL mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}


@property (retain, nonatomic) EDString *lastCachedName; // ivar: mLastCachedName


+(id)trendlineLabelWithResources:(id)arg0 ;
-(BOOL)isAutomaticLabelDeleted;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isGeneratedText;
-(NSUInteger)contentFormatId;
-(id)contentFormat;
-(id)description;
-(id)graphicProperties;
-(id)initWithResources:(id)arg0 ;
-(id)name;
-(void)setAutomaticLabelDeleted:(BOOL)arg0 ;
-(void)setContentFormat:(id)arg0 ;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setGeneratedText:(BOOL)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg0 ;
-(void)setName:(id)arg0 chart:(id)arg1 ;


@end


#endif