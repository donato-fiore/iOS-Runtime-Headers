// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATIONINFODATA_H
#define PDANIMATIONINFODATA_H


#import <Foundation/Foundation.h>

#import "PDBuild.h"
#import "PDSequentialTimeNode.h"
#import "OADDrawable.h"

@interface PDAnimationInfoData : NSObject {
    unsigned int mOrder;
    PDBuild *mBuild;
    PDSequentialTimeNode *mSequentialTimeNodeData;
    OADDrawable *mDrawable;
}




-(id)build;
-(id)data;
-(id)drawable;
-(id)initWithTarget:(id)arg0 presetClass:(int)arg1 presetId:(int)arg2 triggerType:(int)arg3 iterateType:(int)arg4 delay:(CGFloat)arg5 direction:(CGFloat)arg6 order:(unsigned int)arg7 groupId:(id)arg8 build:(id)arg9 ;
-(unsigned int)order;


@end


#endif