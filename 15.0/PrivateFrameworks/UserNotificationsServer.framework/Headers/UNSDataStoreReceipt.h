// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSDATASTORERECEIPT_H
#define UNSDATASTORERECEIPT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UNSDataStoreReceipt : NSObject

@property (readonly, nonatomic) NSArray *addedObjects; // ivar: _addedObjects
@property (readonly, nonatomic) NSArray *removedObjects; // ivar: _removedObjects
@property (readonly, nonatomic) NSArray *replacedObjects; // ivar: _replacedObjects
@property (readonly, nonatomic) NSArray *replacementObjects; // ivar: _replacementObjects


+(id)receiptWithAddedObjects:(id)arg0 replacedObjects:(id)arg1 replacementObjects:(id)arg2 removedObjects:(id)arg3 ;
-(BOOL)hasChanges;
-(id)initWithAddedObjects:(id)arg0 replacedObjects:(id)arg1 replacementObjects:(id)arg2 removedObjects:(id)arg3 ;


@end


#endif