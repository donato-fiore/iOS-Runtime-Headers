// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAACTION_H
#define DAACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAAction : NSObject <NSSecureCoding>



@property (nonatomic) int changeId; // ivar: _changeId
@property (retain, nonatomic, setter=_setChangedItem:) id *changedItem; // ivar: _changedItem
@property (retain, nonatomic) id *forwardedAttendeeUUIDs; // ivar: _forwardedAttendeeUUIDs
@property (retain, nonatomic) id *forwardedAttendees; // ivar: _forwardedAttendees
@property (nonatomic) BOOL ignoresGuardianRestrictions; // ivar: _ignoresGuardianRestrictions
@property (retain, nonatomic) id *instanceId; // ivar: _instanceId
@property (nonatomic) NSUInteger itemChangeType; // ivar: _itemChangeType
@property (retain, nonatomic) id *serverId; // ivar: _serverId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemChangeType:(NSUInteger)arg0 changedItem:(id)arg1 serverId:(id)arg2 ;
-(id)initWithItemChangeType:(NSUInteger)arg0 changedItem:(id)arg1 serverId:(id)arg2 instanceId:(id)arg3 ;
-(id)message;
-(id)stringForItemChangeType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif