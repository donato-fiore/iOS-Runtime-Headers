// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAXPCACTIVITYCANCELLATIONTOKEN_H
#define PAXPCACTIVITYCANCELLATIONTOKEN_H

@class NSString;
@protocol PACancellationToken, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PAXPCActivityCancellationToken : NSObject <PACancellationToken>

 {
    NSObject<OS_xpc_object> *_activity;
}


@property (readonly) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActivity:(id)arg0 ;


@end


#endif