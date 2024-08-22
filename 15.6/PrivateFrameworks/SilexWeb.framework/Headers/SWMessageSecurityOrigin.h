// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWMESSAGESECURITYORIGIN_H
#define SWMESSAGESECURITYORIGIN_H

@class NSString, NSURLRequest;
@protocol SWMessageSecurityOrigin;

#import <Foundation/Foundation.h>


@interface SWMessageSecurityOrigin : NSObject <SWMessageSecurityOrigin>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *host; // ivar: _host
@property (readonly, nonatomic) NSString *protocol; // ivar: _protocol
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)initWithProtocol:(id)arg0 host:(id)arg1 request:(id)arg2 ;


@end


#endif