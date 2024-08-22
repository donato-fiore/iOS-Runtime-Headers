// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFHISTORYANALYZERDEFAULTOBJECTSTATE_H
#define PFHISTORYANALYZERDEFAULTOBJECTSTATE_H

@class NSString, NSNumber, NSDictionary;
@protocol PFHistoryAnalyzerObjectState;

#import <Foundation/Foundation.h>

#import "NSManagedObjectID.h"

@interface PFHistoryAnalyzerDefaultObjectState : NSObject <PFHistoryAnalyzerObjectState>



@property (readonly, nonatomic) NSManagedObjectID *analyzedObjectID; // ivar: _analyzedObjectID
@property (readonly, nonatomic) NSString *finalChangeAuthor; // ivar: _finalChangeAuthor
@property (readonly, nonatomic) NSInteger finalChangeType; // ivar: _finalChangeType
@property (readonly, nonatomic) NSNumber *finalTransactionNumber; // ivar: _finalTransactionNumber
@property (readonly, nonatomic) NSInteger originalChangeType; // ivar: _originalChangeType
@property (readonly, nonatomic) NSNumber *originalTransactionNumber; // ivar: _originalTransactionNumber
@property (readonly, nonatomic) NSDictionary *tombstone; // ivar: _tombstone


-(id)description;
-(id)initWithOriginalChange:(id)arg0 ;
-(void)dealloc;
-(void)updateWithChange:(id)arg0 ;


@end


#endif