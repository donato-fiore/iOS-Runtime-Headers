// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCMESSAGERECORD_H
#define WCMESSAGERECORD_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WCMessageRecord : NSObject

@property (readonly, copy) id *errorHandler; // ivar: _errorHandler
@property (readonly) BOOL expectsResponse; // ivar: _expectsResponse
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 errorHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif