// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNETWORKRESELECTIONCONTROLLER_H
#define SBNETWORKRESELECTIONCONTROLLER_H

@class NSString;
@protocol STTelephonyStateObserver;

#import <Foundation/Foundation.h>


@interface SBNetworkReselectionController : NSObject <STTelephonyStateObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)init;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg0 forSlot:(NSInteger)arg1 ;
-(void)_test;
-(void)dealloc;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;


@end


#endif