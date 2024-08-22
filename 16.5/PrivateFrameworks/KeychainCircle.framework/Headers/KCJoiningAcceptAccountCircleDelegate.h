// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCJOININGACCEPTACCOUNTCIRCLEDELEGATE_H
#define KCJOININGACCEPTACCOUNTCIRCLEDELEGATE_H

@class NSString;
@protocol KCJoiningAcceptCircleDelegate;

#import <Foundation/Foundation.h>


@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)delegate;
-(id)circleGetInitialSyncViews:(unsigned int)arg0 error:(*id)arg1 ;
-(id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo *)arg0 error:(*id)arg1 ;


@end


#endif