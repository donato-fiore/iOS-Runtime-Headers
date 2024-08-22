// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCMIGRATIONREPORT_H
#define BRCMIGRATIONREPORT_H

@class NSString, NSError, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCMigrationReport : NSObject <NSSecureCoding>



@property NSUInteger bouncedItems; // ivar: bouncedItems
@property BRBouncesTypesMatrix bouncedItemsMatrix; // ivar: bouncedItemsMatrix
@property NSUInteger ciconiaVersion; // ivar: ciconiaVersion
@property CGFloat cloningDuration; // ivar: cloningDuration
@property (retain) NSString *domainID; // ivar: domainID
@property CGFloat duration; // ivar: duration
@property NSUInteger errorOriginatorId; // ivar: errorOriginatorId
@property NSUInteger expectedAmountOfItemsMigrated; // ivar: expectedAmountOfItemsMigrated
@property NSUInteger ignoredContentProtectedItems; // ivar: ignoredContentProtectedItems
@property CGFloat importDuration; // ivar: importDuration
@property NSUInteger itemsChangedDuringCloning; // ivar: itemsChangedDuringCloning
@property NSUInteger itemsNotFoundInDB; // ivar: itemsNotFoundInDB
@property NSUInteger itemsThatAreNotMigrated; // ivar: itemsThatAreNotMigrated
@property (retain, nonatomic) NSError *lastError; // ivar: lastError
@property BOOL manuallyTriggered; // ivar: manuallyTriggered
@property NSUInteger materialisedCountOnFPFS; // ivar: materialisedCountOnFPFS
@property NSUInteger materialisedCountOnICD; // ivar: materialisedCountOnICD
@property (retain) NSUUID *migrationUUID; // ivar: migrationUUID
@property BOOL nonSideFaultsCompletelyMigrated; // ivar: nonSideFaultsCompletelyMigrated
@property NSUInteger packagesWithoutBundleBit; // ivar: packagesWithoutBundleBit
@property BOOL sideFaultsBelowThreshold; // ivar: sideFaultsBelowThreshold
@property NSUInteger totalItemCount; // ivar: totalItemCount
@property BRTypesField typeOfMigrated; // ivar: typeOfMigrated
@property BRTypesField typeOfNotMigrated; // ivar: typeOfNotMigrated
@property NSInteger unexpectedCreations; // ivar: unexpectedCreations


+(BOOL)supportsSecureCoding;
+(id)cleanupStateURL;
+(id)migrationReportFromData:(id)arg0 ;
-(id)convertToData;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif