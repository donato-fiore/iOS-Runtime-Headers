// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCHELDRECORDS_H
#define FCHELDRECORDS_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"

@interface FCHeldRecords : NSObject

@property (readonly, nonatomic) NSArray *allRecordIDs;
@property (readonly, nonatomic) NSArray *allRecords;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDictionary *interestTokensByID; // ivar: _interestTokensByID
@property (readonly, nonatomic) FCInterestToken *onlyInterestToken;
@property (readonly, nonatomic) id *onlyRecord;
@property (readonly, nonatomic) NSString *onlyRecordID;
@property (readonly, nonatomic) NSDictionary *recordsByID; // ivar: _recordsByID


+(id)heldRecordsByMerging:(id)arg0 with:(id)arg1 ;
-(id)heldRecordsForIDs:(id)arg0 ;
-(id)heldRecordsPassingTest:(id)arg0 ;
-(id)initWithRecordsByID:(id)arg0 interestTokensByID:(id)arg1 ;
-(id)interestTokenForID:(id)arg0 ;
-(id)recordWithID:(id)arg0 ;
-(id)transformRecordsByIDWithBlock:(id)arg0 ;
-(id)transformRecordsInOrder:(id)arg0 withBlock:(id)arg1 ;
-(id)transformRecordsWithBlock:(id)arg0 ;
-(void)enumerateRecordsAndInterestTokensInOrder:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateRecordsAndInterestTokensWithBlock:(id)arg0 ;


@end


#endif