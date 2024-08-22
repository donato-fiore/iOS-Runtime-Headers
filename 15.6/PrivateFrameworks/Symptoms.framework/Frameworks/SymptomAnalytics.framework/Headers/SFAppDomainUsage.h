// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPDOMAINUSAGE_H
#define SFAPPDOMAINUSAGE_H

@class NSManagedObject, NSString, NSDate, NSNumber;


#import "SFApp.h"

@interface SFAppDomainUsage : NSManagedObject

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *context;
@property (nonatomic) short contextVerificationType;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) short domainClassification;
@property (copy, nonatomic) NSString *domainOwner;
@property (nonatomic) short domainType;
@property (nonatomic) int effectiveUserId;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (copy, nonatomic) NSNumber *hits;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif