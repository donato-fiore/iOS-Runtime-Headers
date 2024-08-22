// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTRESOURCECHANGENOTIFICATION_H
#define EKPERSISTENTRESOURCECHANGENOTIFICATION_H



#import "EKPersistentNotification.h"

@interface EKPersistentResourceChangeNotification : EKPersistentNotification



+(Class)meltedClass;
+(id)relations;
-(id)lastModifiedDate;
-(id)resourceChanges;
-(int)entityType;
-(void)setLastModifiedDate:(id)arg0 ;
-(void)setResourceChanges:(id)arg0 ;


@end


#endif