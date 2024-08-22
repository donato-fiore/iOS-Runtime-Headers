// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCJOININGREQUESTACCOUNTCIRCLEDELEGATE_H
#define KCJOININGREQUESTACCOUNTCIRCLEDELEGATE_H

@class NSString;
@protocol KCJoiningRequestCircleDelegate;

#import <Foundation/Foundation.h>


@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)delegate;
-(BOOL)processCircleJoinData:(id)arg0 version:(int)arg1 error:(*id)arg2 ;
-(struct __OpaqueSOSPeerInfo *)copyPeerInfoError:(*id)arg0 ;


@end


#endif