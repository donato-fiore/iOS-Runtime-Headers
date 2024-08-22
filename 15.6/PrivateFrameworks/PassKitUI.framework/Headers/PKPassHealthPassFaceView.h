// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSHEALTHPASSFACEVIEW_H
#define PKPASSHEALTHPASSFACEVIEW_H



#import "PKPassFrontFaceView.h"

@interface PKPassHealthPassFaceView : PKPassFrontFaceView {
    NSUInteger _requestedRegions;
    NSUInteger _effectiveRegions;
}




-(NSUInteger)visibleRegions;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)templateForHeaderBucket;
-(id)templateForLayoutMode:(NSInteger)arg0 ;
-(void)didAuthenticate;
-(void)setVisibleRegions:(NSUInteger)arg0 ;


@end


#endif