// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSETTINGSUIVISIBLEREMOTEVALUE_H
#define CRKSETTINGSUIVISIBLEREMOTEVALUE_H

@class CATRemoteTaskOperation, NSString;
@protocol CATTaskOperationNotificationDelegate, CRKRequestPerformingProtocol;

#import <Foundation/Foundation.h>


@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate>

 {
    id<CRKRequestPerformingProtocol> *mDaemonProxy;
    CATRemoteTaskOperation *mSubscriptionOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger settingsUIVisible; // ivar: _settingsUIVisible
@property (readonly) Class superclass;


-(BOOL)isCurrentSubscriptionOperation:(id)arg0 ;
-(id)initWithDaemonProxy:(id)arg0 ;
-(void)beginUpdating;
-(void)dealloc;
-(void)endUpdating;
-(void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg0 ;
-(void)settingsUIVisibleDidChange:(BOOL)arg0 ;
-(void)taskOperation:(id)arg0 didPostNotificationWithName:(id)arg1 userInfo:(id)arg2 ;


@end


#endif