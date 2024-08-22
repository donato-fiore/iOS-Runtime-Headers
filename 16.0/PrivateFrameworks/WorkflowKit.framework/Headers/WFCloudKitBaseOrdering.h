// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCLOUDKITBASEORDERING_H
#define WFCLOUDKITBASEORDERING_H

@class NSString, CKRecordID, NSOrderedSet, NSArray, NSData;
@protocol WFCloudKitOrdering;

#import <Foundation/Foundation.h>


@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering>



@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSOrderedSet *orderedFolderIDs;
@property (readonly, nonatomic) NSArray *orderedFolderIDsArray; // ivar: _orderedFolderIDsArray
@property (readonly, nonatomic) NSOrderedSet *orderedWorkflowIDs;
@property (readonly, nonatomic) NSArray *orderedWorkflowIDsArray; // ivar: _orderedWorkflowIDsArray
@property (copy, nonatomic) NSData *recordSystemFieldsData; // ivar: _recordSystemFieldsData
@property (readonly) Class superclass;


+(id)collectionIdentifierForRecordID:(id)arg0 ;
+(id)properties;
+(id)recordBasename;
+(id)recordType;
-(id)initWithIdentifier:(id)arg0 orderedWorkflowIDs:(id)arg1 orderedFolderIDs:(id)arg2 ;


@end


#endif