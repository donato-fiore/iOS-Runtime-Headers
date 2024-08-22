// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMNSPERSISTENTHISTORYCHANGETOMBSTONE_H
#define REMNSPERSISTENTHISTORYCHANGETOMBSTONE_H

@class NSDictionary;


#import "REMChangeTombstone.h"

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone; // ivar: _persistentHistoryChangeTombstone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)assignmentOwningReminderIdentifier;
-(id)daIsEventOnlyContainer;
-(id)externalIdentifier;
-(id)hashtagName;
-(id)hashtagReminderIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectIdentifier;
-(id)shareeAddress;
-(id)shareeDisplayName;
-(id)shareeOwningListIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif