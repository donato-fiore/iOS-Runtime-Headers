// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTCHANGEEVENT_H
#define BLSBACKLIGHTCHANGEEVENT_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BLSBacklightChangeRequest.h"

@interface BLSBacklightChangeEvent : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BLSBacklightChangeRequest *changeRequest; // ivar: _changeRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger eventID; // ivar: _eventID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger previousState; // ivar: _previousState
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventID:(NSUInteger)arg0 state:(NSInteger)arg1 previousState:(NSInteger)arg2 changeRequest:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif