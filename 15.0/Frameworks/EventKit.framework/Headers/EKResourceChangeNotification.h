// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRESOURCECHANGENOTIFICATION_H
#define EKRESOURCECHANGENOTIFICATION_H

@class NSDate, NSSet;


#import "EKNotification.h"

@interface EKResourceChangeNotification : EKNotification

@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSSet *resourceChanges;


+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
-(void)addResourceChange:(id)arg0 ;
-(void)removeResourceChange:(id)arg0 ;


@end


#endif