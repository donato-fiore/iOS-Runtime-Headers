// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16NEWSSUBSCRIPTIONP33_2BC9D414A52E1C4290962E677FF5534227INAPPMESSAGECONTEXTPROVIDER_H
#define _TTC16NEWSSUBSCRIPTIONP33_2BC9D414A52E1C4290962E677FF5534227INAPPMESSAGECONTEXTPROVIDER_H

@protocol IAMApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscriptionP33_2BC9D414A52E1C4290962E677FF5534227InAppMessageContextProvider : NSObject <IAMApplicationContextProvider>



@property (nonatomic, readonly) BOOL allowsModalMessageDisplay;


-(id)contextPropertyWithName:(id)arg0 ;
-(id)init;
-(id)viewControllerForModalPresentation;


@end


#endif