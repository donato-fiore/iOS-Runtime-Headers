// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIHIERARCHY_H
#define ODIHIERARCHY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ODIState.h"

@interface ODIHierarchy : NSObject {
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}




+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
-(*void)mapRangesForNode:(id)arg0 ;
-(id)infoForNode:(id)arg0 ;
-(id)initWithType:(int)arg0 state:(id)arg1 ;
-(struct CGRect )boundsOfNode:(id)arg0 ;
-(void)createInfoForNode:(id)arg0 depth:(int)arg1 ;
-(void)map;
-(void)mapLogicalBoundsWithXRanges:(*void)arg0 ;
-(void)mapNode:(id)arg0 ;
-(void)setAbsolutePositionOfNode:(id)arg0 parentRow:(int)arg1 parentXOffset:(float)arg2 ;


@end


#endif