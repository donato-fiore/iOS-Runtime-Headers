// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTACTION_H
#define EKEVENTACTION_H

@class NSString, NSData;


#import "EKObject.h"

@interface EKEventAction : EKObject

@property (copy, nonatomic) NSString *externalFolderID;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalScheduleID;


+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;


@end


#endif