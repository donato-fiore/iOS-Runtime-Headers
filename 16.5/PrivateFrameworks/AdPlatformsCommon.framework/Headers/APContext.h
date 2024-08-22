// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONTEXT_H
#define APCONTEXT_H

@class NSArray, NSString, NSUUID, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "APContentDepiction.h"

@interface APContext : NSObject <NSSecureCoding>



@property (retain) NSArray *adjacent; // ivar: _adjacent
@property (retain) APContentDepiction *current; // ivar: _current
@property (readonly) NSString *fingerprint;
@property (retain) NSUUID *identifier; // ivar: _identifier
@property ? maxSize; // ivar: _maxSize
@property (retain) NSDate *prefetchTimestamp; // ivar: _prefetchTimestamp
@property (retain) NSString *requestedAdIdentifier; // ivar: _requestedAdIdentifier
@property (retain) NSDictionary *supplementalContext; // ivar: _supplementalContext


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 maxSize:(struct ? )arg1 requestedAdIdentifier:(id)arg2 currentContent:(id)arg3 adjacentContent:(id)arg4 supplementalContext:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif