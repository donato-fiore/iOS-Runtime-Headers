// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSHEALTHPASSFACEVIEW_H
#define PKPASSHEALTHPASSFACEVIEW_H



#import "PKPassFrontFaceView.h"

@interface PKPassHealthPassFaceView : PKPassFrontFaceView {
    NSUInteger _requestedRegions;
    NSUInteger _effectiveRegions;
}




-(id)templateForHeaderBucket;
-(id)templateForLayoutMode:(NSInteger)arg0 ;


@end


#endif