// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDCLIENTPROVIDER_H
#define ACDCLIENTPROVIDER_H

@class NSString;
@protocol ACDClientProviderProtocol;

#import <Foundation/Foundation.h>


@interface ACDClientProvider : NSObject <ACDClientProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createClientForConnection:(id)arg0 ;


@end


#endif