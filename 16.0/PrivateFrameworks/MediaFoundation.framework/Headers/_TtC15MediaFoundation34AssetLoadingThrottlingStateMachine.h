// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION34ASSETLOADINGTHROTTLINGSTATEMACHINE_H
#define _TTC15MEDIAFOUNDATION34ASSETLOADINGTHROTTLINGSTATEMACHINE_H

@class SwiftObject;
@protocol MFResettable;



@interface _TtC15MediaFoundation34AssetLoadingThrottlingStateMachine : SwiftObject <MFResettable>

 {
    ? state;
    ? currentItemID;
    ? reporter;
}




-(void)reset;


@end


#endif