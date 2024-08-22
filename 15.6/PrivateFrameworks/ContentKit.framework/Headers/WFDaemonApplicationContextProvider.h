// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDAEMONAPPLICATIONCONTEXTPROVIDER_H
#define WFDAEMONAPPLICATIONCONTEXTPROVIDER_H

@class NSString;
@protocol WFApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;
@property (readonly, nonatomic) NSString *userInterfaceType; // ivar: _userInterfaceType
@property (nonatomic) BOOL wfIdleTimerDisabled;


-(BOOL)shouldReverseLayoutDirection;
-(NSInteger)currentApplicationStateForWFApplicationContext:(id)arg0 ;
-(id)applicationForWFApplicationContext:(id)arg0 ;
-(id)bundleForWFApplicationContext:(id)arg0 ;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg0 ;
-(id)init;
-(id)initWithUserInterfaceType:(id)arg0 ;
-(id)keyWindowForWFApplicationContext:(id)arg0 ;
-(id)notificationNameForApplicationStateEvent:(NSInteger)arg0 applicationContext:(id)arg1 ;


@end


#endif