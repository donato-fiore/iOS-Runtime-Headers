// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONSERVICEEXTENSION_H
#define UNNOTIFICATIONSERVICEEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface UNNotificationServiceExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)didReceiveNotificationRequest:(id)arg0 withContentHandler:(id)arg1 ;
-(void)serviceExtensionTimeWillExpire;


@end


#endif