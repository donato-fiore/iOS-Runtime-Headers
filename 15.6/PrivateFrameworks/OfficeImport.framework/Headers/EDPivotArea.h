// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPIVOTAREA_H
#define EDPIVOTAREA_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"
#import "EDReference.h"

@interface EDPivotArea : NSObject {
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}




+(id)pivotArea;
-(BOOL)grandCol;
-(BOOL)grandRow;
-(BOOL)outline;
-(id)description;
-(id)init;
-(id)offset;
-(id)references;
-(int)type;
-(void)setGrandCol:(BOOL)arg0 ;
-(void)setGrandRow:(BOOL)arg0 ;
-(void)setOffset:(id)arg0 ;
-(void)setOutline:(BOOL)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif