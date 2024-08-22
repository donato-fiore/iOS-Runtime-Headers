// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERARECORDINGREACHABILITYEVENT_H
#define HMCAMERARECORDINGREACHABILITYEVENT_H

@class NSDate, NSString, NSUUID;
@protocol HMCameraRecordingEvent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding>



@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 dateOfOccurrence:(id)arg1 reachable:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif