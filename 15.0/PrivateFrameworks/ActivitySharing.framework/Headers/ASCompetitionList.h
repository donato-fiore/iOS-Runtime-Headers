// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOMPETITIONLIST_H
#define ASCOMPETITIONLIST_H

@class NSArray, NSString, NSUUID, CKRecord;
@protocol ASCloudKitCodable, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCodableCloudKitCompetitionList.h"
#import "ASCompetition.h"

@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying>



@property (readonly, nonatomic) ASCodableCloudKitCompetitionList *codableCompetitionList;
@property (retain, nonatomic) NSArray *competitions; // ivar: _competitions
@property (readonly, nonatomic) ASCompetition *currentCompetition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *friendUUID; // ivar: _friendUUID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CKRecord *systemFieldsOnlyRecord; // ivar: _systemFieldsOnlyRecord
@property (nonatomic) NSInteger type; // ivar: _type


+(id)competitionListFromCodableDatabaseCompetitionList:(id)arg0 codableCompetitions:(id)arg1 withType:(NSInteger)arg2 ;
+(id)competitionListWithCodableCompetitionList:(id)arg0 ;
+(id)competitionListWithRecord:(id)arg0 ;
-(id)codableDatabaseCompetitionListEntryForOwner:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFriendUUID:(id)arg0 type:(NSInteger)arg1 ;
-(id)recordWithZoneID:(id)arg0 ;


@end


#endif