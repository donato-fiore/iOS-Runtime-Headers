// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUIIMAGEREQUEST_H
#define SFUIIMAGEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFUIImageRequest : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) BOOL synchronous; // ivar: _synchronous


-(id)initWithRequestID:(int)arg0 identifier:(id)arg1 synchronous:(BOOL)arg2 resultHandler:(id)arg3 ;


@end


#endif