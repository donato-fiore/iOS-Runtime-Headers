// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSESSIONMESSAGERESUME_H
#define CATSESSIONMESSAGERESUME_H

@class NSDictionary, NSUUID;


#import "CATSessionMessage.h"

@interface CATSessionMessageResume : CATSessionMessage

@property (copy, nonatomic) NSDictionary *clientUserInfo; // ivar: _clientUserInfo
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif