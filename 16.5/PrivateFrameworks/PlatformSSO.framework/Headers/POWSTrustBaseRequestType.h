// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTBASEREQUESTTYPE_H
#define POWSTRUSTBASEREQUESTTYPE_H

@class NSString;
@protocol POXSDefinitionProvider;

#import <Foundation/Foundation.h>


@interface POWSTrustBaseRequestType : NSObject <POXSDefinitionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;


@end


#endif