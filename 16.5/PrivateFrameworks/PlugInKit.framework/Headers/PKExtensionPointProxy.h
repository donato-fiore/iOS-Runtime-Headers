// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXTENSIONPOINTPROXY_H
#define PKEXTENSIONPOINTPROXY_H

@class NSString, NSNumber, NSDictionary;
@protocol PKExtensionPointProxy;

#import <Foundation/Foundation.h>


@interface PKExtensionPointProxy : NSObject <PKExtensionPointProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSDictionary *sdkEntry;
@property (readonly) Class superclass;


+(id)extensionPointForIdentifier:(id)arg0 platform:(id)arg1 ;


@end


#endif