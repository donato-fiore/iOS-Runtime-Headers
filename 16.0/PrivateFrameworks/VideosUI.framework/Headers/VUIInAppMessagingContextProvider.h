// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIINAPPMESSAGINGCONTEXTPROVIDER_H
#define VUIINAPPMESSAGINGCONTEXTPROVIDER_H

@class NSString, IAMPresentationPolicy, NSMutableSet;
@protocol IAMApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagingContextProvider : NSObject <IAMApplicationContextProvider>



@property (readonly) BOOL allowsModalMessageDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastMessageDisplayTime;
@property (retain, nonatomic) IAMPresentationPolicy *normalPolicy; // ivar: _normalPolicy
@property (retain, nonatomic) IAMPresentationPolicy *restrictedPolicy; // ivar: _restrictedPolicy
@property (retain, nonatomic) NSMutableSet *subscriptionProperties; // ivar: _subscriptionProperties
@property (readonly) Class superclass;


-(BOOL)_hasDownloads;
-(BOOL)_hasItunesDownloads;
-(BOOL)_hasItunesPurchases;
-(BOOL)_hasSubscriptionDownloads;
-(id)_connectionType;
-(id)_locationStatus;
-(id)_runSubscriptionQuery:(id)arg0 ;
-(id)_stringValueForKeyPath:(id)arg0 dictionary:(id)arg1 ;
-(id)contextPropertyWithName:(id)arg0 ;
-(id)init;
-(id)presentationPolicyForPolicyGroup:(NSInteger)arg0 ;
-(id)queriedSubscriptionProperties;
-(id)viewControllerForModalPresentation;
-(void)messageCoordinator:(id)arg0 didRequestAction:(id)arg1 ;


@end


#endif