// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDINTERACTIONRECORD_H
#define _CDINTERACTIONRECORD_H

@class NSManagedObject, NSString, NSSet;


#import "_CDContactRecord.h"

@interface _CDInteractionRecord : NSManagedObject

@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSSet *attachments;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *contentURL;
@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) NSString *derivedIntentIdentifier;
@property (nonatomic) NSInteger direction;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (nonatomic) CGFloat endDate;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) BOOL isResponse;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) NSString *locationUUID;
@property (nonatomic) BOOL mailShareSheetDeletionCandidate;
@property (nonatomic) NSInteger mechanism;
@property (retain, nonatomic) NSString *nsUserName;
@property (nonatomic) NSInteger recipientCount;
@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) _CDContactRecord *sender;
@property (nonatomic) CGFloat startDate;
@property (retain, nonatomic) NSString *targetBundleId;
@property (nonatomic) CGFloat updateDate;
@property (retain, nonatomic) NSString *uuid;




@end


#endif