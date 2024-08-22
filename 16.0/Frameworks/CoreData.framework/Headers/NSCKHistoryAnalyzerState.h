// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCKHISTORYANALYZERSTATE_H
#define NSCKHISTORYANALYZERSTATE_H

@class NSNumber, NSString, NSDictionary;
@protocol PFHistoryAnalyzerObjectState;


#import "NSManagedObject.h"
#import "NSManagedObjectID.h"

@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>



@property (readonly, nonatomic) NSManagedObjectID *analyzedObjectID;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (readonly, nonatomic) NSString *finalChangeAuthor;
@property (readonly, nonatomic) NSInteger finalChangeType;
@property (retain, nonatomic) NSNumber *finalChangeTypeNum;
@property (readonly, nonatomic) NSNumber *finalTransactionNumber;
@property (readonly, nonatomic) NSInteger originalChangeType;
@property (retain, nonatomic) NSNumber *originalChangeTypeNum;
@property (readonly, nonatomic) NSNumber *originalTransactionNumber;
@property (readonly, nonatomic) NSDictionary *tombstone;


+(id)entityPath;
-(void)mergeWithState:(id)arg0 ;
-(void)updateWithChange:(id)arg0 ;


@end


#endif