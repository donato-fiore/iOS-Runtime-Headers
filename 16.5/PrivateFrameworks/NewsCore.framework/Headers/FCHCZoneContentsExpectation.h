// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCHCZONECONTENTSEXPECTATION_H
#define FCHCZONECONTENTSEXPECTATION_H

@class CKDatabase, NSString, NSArray, CKRecordZoneID;
@protocol FCHCExpectation;

#import <Foundation/Foundation.h>


@interface FCHCZoneContentsExpectation : NSObject <FCHCExpectation>



@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *recordTests; // ivar: _recordTests
@property (readonly) Class superclass;
@property (copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(void)validate;


@end


#endif