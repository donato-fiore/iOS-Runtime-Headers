// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMNSPERSISTENTHISTORYCHANGETOMBSTONE_H
#define REMNSPERSISTENTHISTORYCHANGETOMBSTONE_H

@class NSDictionary, NSUUID;


#import "REMChangeTombstone.h"

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone; // ivar: _persistentHistoryChangeTombstone
@property (readonly) NSUUID *uuidForChangeTracking;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)assignmentOwningReminderIdentifier;
-(id)daIsEventOnlyContainer;
-(id)externalIdentifier;
-(id)hashtagLabelUUIDForChangeTracking;
-(id)hashtagName;
-(id)hashtagReminderIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectIdentifier;
-(id)remObjectIdentifier;
-(id)shareeAddress;
-(id)shareeDisplayName;
-(id)shareeOwningListIdentifier;
-(id)syncActivityUUIDForChangeTracking;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif