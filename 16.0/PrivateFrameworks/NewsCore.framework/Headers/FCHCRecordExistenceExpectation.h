// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHCRECORDEXISTENCEEXPECTATION_H
#define FCHCRECORDEXISTENCEEXPECTATION_H

@class CKDatabase, NSString, CKRecordID;
@protocol FCHCExpectation;

#import <Foundation/Foundation.h>


@interface FCHCRecordExistenceExpectation : NSObject <FCHCExpectation>



@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (nonatomic) BOOL shouldExist; // ivar: _shouldExist
@property (readonly) Class superclass;


-(void)validate;


@end


#endif