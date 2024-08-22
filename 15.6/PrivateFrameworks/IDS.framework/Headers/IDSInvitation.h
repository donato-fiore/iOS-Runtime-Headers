// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSINVITATION_H
#define IDSINVITATION_H

@class NSDate, NSString, NSUUID;
@protocol IDSInvitationContext;

#import <Foundation/Foundation.h>


@interface IDSInvitation : NSObject

@property (readonly, nonatomic) NSObject<IDSInvitationContext> *context; // ivar: _context
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *senderMergeID; // ivar: _senderMergeID
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID


-(id)initWithState:(NSInteger)arg0 expirationDate:(id)arg1 uniqueID:(id)arg2 context:(id)arg3 ;


@end


#endif