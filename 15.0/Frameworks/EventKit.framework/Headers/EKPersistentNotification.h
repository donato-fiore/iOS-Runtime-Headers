// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPERSISTENTNOTIFICATION_H
#define EKPERSISTENTNOTIFICATION_H



#import "EKPersistentObject.h"

@interface EKPersistentNotification : EKPersistentObject



+(id)relations;
-(id)UUID;
-(id)calendar;
-(id)externalID;
-(id)externalModificationTag;
-(id)hostURL;
-(int)entityType;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setHostURL:(id)arg0 ;
-(void)setUUID:(id)arg0 ;


@end


#endif