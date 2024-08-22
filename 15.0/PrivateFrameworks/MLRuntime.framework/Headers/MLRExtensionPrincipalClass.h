// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLREXTENSIONPRINCIPALCLASS_H
#define MLREXTENSIONPRINCIPALCLASS_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface MLRExtensionPrincipalClass : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(void)beginRequestWithExtensionContext:(id)arg0 ;


@end


#endif