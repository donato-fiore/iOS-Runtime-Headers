// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE34ASSETLOADINGTHROTTLINGSTATEMACHINE_H
#define _TTC17MEDIAPLAYBACKCORE34ASSETLOADINGTHROTTLINGSTATEMACHINE_H

@class SwiftObject;
@protocol MFResettable;



@interface _TtC17MediaPlaybackCore34AssetLoadingThrottlingStateMachine : SwiftObject <MFResettable>

 {
    ? state;
    ? currentItemID;
    ? reporter;
}




-(void)resetWithReason:(id)arg0 ;


@end


#endif