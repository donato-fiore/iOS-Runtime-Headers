// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKNOTIFICATION_H
#define EKNOTIFICATION_H

@class NSString, NSURL;


#import "EKObject.h"
#import "EKObjectID.h"

@interface EKNotification : EKObject

@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSURL *hostURL;
@property (readonly, nonatomic) EKObjectID *objectID;


+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(BOOL)save:(*id)arg0 ;
-(id)calendar;


@end


#endif