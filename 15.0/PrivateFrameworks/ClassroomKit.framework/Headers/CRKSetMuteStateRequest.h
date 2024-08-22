// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSETMUTESTATEREQUEST_H
#define CRKSETMUTESTATEREQUEST_H

@class CATTaskRequest;



@interface CRKSetMuteStateRequest : CATTaskRequest

@property (nonatomic, getter=shouldMute) BOOL mute; // ivar: _mute


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif