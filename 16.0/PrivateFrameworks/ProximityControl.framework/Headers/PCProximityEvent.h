// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCPROXIMITYEVENT_H
#define PCPROXIMITYEVENT_H

@class NSError, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCProximityEvent : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) BOOL expectsDisplayContext; // ivar: _expectsDisplayContext
@property (readonly, copy, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 mediaRemoteID:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 mediaRemoteID:(id)arg1 info:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif