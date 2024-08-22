// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNLAUNCHSERVICESURLHANDLER_H
#define CALNLAUNCHSERVICESURLHANDLER_H

@class NSString;
@protocol CALNURLHandler;

#import <Foundation/Foundation.h>


@interface CALNLaunchServicesURLHandler : NSObject <CALNURLHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_openApplicationOptionsForResponse:(id)arg0 ;
+(id)sharedInstance;
-(void)openURL:(id)arg0 response:(id)arg1 ;


@end


#endif