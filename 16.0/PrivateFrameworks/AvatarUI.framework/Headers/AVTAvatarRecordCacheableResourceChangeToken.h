// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARRECORDCACHEABLERESOURCECHANGETOKEN_H
#define AVTAVATARRECORDCACHEABLERESOURCECHANGETOKEN_H

@class NSString, NSNotificationCenter;
@protocol AVTCacheableResourceChangeToken;

#import <Foundation/Foundation.h>


@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken>



@property (readonly, copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 recordIdentifier:(id)arg1 changeHandler:(id)arg2 ;
-(void)handleNotification:(id)arg0 ;
-(void)startObservingChanges;
-(void)stopObservingChanges;


@end


#endif