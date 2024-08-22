// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTABLECOLUMN_H
#define EDTABLECOLUMN_H


#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDString.h"

@interface EDTableColumn : NSObject {
    EDResources *mResources;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}




+(id)tableColumnWithResources:(id)arg0 ;
-(NSUInteger)dataAreaDxfIndex;
-(NSUInteger)headerRowDxfIndex;
-(NSUInteger)totalsRowDxfIndex;
-(id)dataAreaDxf;
-(id)description;
-(id)headerRowDxf;
-(id)initWithResources:(id)arg0 ;
-(id)name;
-(id)totalsRowDxf;
-(id)totalsRowLabel;
-(id)uniqueName;
-(void)setDataAreaDxf:(id)arg0 ;
-(void)setDataAreaDxfIndex:(NSUInteger)arg0 ;
-(void)setHeaderRowDxf:(id)arg0 ;
-(void)setHeaderRowDxfIndex:(NSUInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setTotalsRowDxf:(id)arg0 ;
-(void)setTotalsRowDxfIndex:(NSUInteger)arg0 ;
-(void)setTotalsRowLabel:(id)arg0 ;
-(void)setUniqueName:(id)arg0 ;


@end


#endif