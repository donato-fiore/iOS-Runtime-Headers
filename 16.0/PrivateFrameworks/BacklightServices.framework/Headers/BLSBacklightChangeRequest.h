// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTCHANGEREQUEST_H
#define BLSBACKLIGHTCHANGEREQUEST_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BLSBacklightChangeSourceEventMetadata.h"

@interface BLSBacklightChangeRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger requestedActivityState; // ivar: _requestedActivityState
@property (readonly, nonatomic) NSInteger sourceEvent; // ivar: _sourceEvent
@property (readonly, nonatomic) BLSBacklightChangeSourceEventMetadata *sourceEventMetadata; // ivar: _sourceEventMetadata
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestedActivityState:(NSInteger)arg0 explanation:(id)arg1 timestamp:(NSUInteger)arg2 sourceEvent:(NSInteger)arg3 sourceEventMetadata:(id)arg4 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif