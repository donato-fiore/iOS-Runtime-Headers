// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMREMOTELOGINMESSAGE_H
#define HMREMOTELOGINMESSAGE_H

@class HMFObject, NSError, NSString;
@protocol NSSecureCoding;



@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initNewMessage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif