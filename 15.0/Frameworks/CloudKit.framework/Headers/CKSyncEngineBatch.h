// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSYNCENGINEBATCH_H
#define CKSYNCENGINEBATCH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKSyncEngineBatch : NSObject

@property (nonatomic, getter=isAtomic) BOOL atomic; // ivar: _atomic
@property (readonly, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (readonly, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave


-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(id)initWithRecordsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;


@end


#endif