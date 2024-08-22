// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMBLOCKEDSENDERMANAGER_H
#define EMBLOCKEDSENDERMANAGER_H

@class NSSet, NSString;
@protocol EMBlockedSenderReader, OS_dispatch_queue, EFScheduler;

#import <Foundation/Foundation.h>


@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader>

 {
    atomic_flag _didRemoveObservers;
}


@property (retain, nonatomic) NSSet *blockedSenderCache; // ivar: _blockedSenderCache
@property (nonatomic, getter=isBlockedSenderEnabled) BOOL blockedSenderEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMoveToTrashEnabled) BOOL moveToTrashEnabled;
@property (retain, nonatomic) NSObject<EFScheduler> *resetScheduler; // ivar: _resetScheduler
@property (readonly) Class superclass;


+(BOOL)shouldMoveToTrashForMailboxType:(NSInteger)arg0 ;
+(BOOL)shouldPromptForBlockedSender;
+(void)setPromptForBlockedSender:(BOOL)arg0 ;
-(BOOL)_isEmailAddressBlocked:(id)arg0 ;
-(BOOL)areAnyEmailAddressesBlocked:(id)arg0 ;
-(BOOL)isContactBlocked:(id)arg0 ;
-(BOOL)isEmailAddressBlocked:(id)arg0 ;
-(BOOL)isTokenAddressIsBlocked:(id)arg0 ;
-(id)init;
-(void)_blockContact:(id)arg0 block:(BOOL)arg1 ;
-(void)_blockPhoneNumber:(id)arg0 ;
-(void)_blockedSenderListDidChange:(id)arg0 ;
-(void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
-(void)_removeObserversIfNeeded;
-(void)_unblockPhoneNumber:(id)arg0 ;
-(void)blockContact:(id)arg0 ;
-(void)blockEmailAddress:(id)arg0 ;
-(void)blockEmailAddresses:(id)arg0 ;
-(void)blockTokenAddress:(id)arg0 ;
-(void)dealloc;
-(void)test_tearDown;
-(void)unblockContact:(id)arg0 ;
-(void)unblockEmailAddress:(id)arg0 ;
-(void)unblockEmailAddresses:(id)arg0 ;
-(void)unblockTokenAddress:(id)arg0 ;


@end


#endif