// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMBUSINESSINVITATION_H
#define EDAMBUSINESSINVITATION_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMBusinessInvitation : FATObject

@property (retain, nonatomic) NSNumber *businessId; // ivar: _businessId
@property (retain, nonatomic) NSNumber *created; // ivar: _created
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSNumber *fromWorkChat; // ivar: _fromWorkChat
@property (retain, nonatomic) NSNumber *requesterId; // ivar: _requesterId
@property (retain, nonatomic) NSNumber *role; // ivar: _role
@property (retain, nonatomic) NSNumber *status; // ivar: _status


+(id)structFields;
+(id)structName;


@end


#endif