// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDCLIPSERVICE_H
#define ASDCLIPSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>


@interface ASDClipService : NSObject <ASDServiceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_channelInterface;
+(id)interface;


@end


#endif