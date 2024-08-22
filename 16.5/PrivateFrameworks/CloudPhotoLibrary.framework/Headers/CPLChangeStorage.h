// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLCHANGESTORAGE_H
#define CPLCHANGESTORAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CPLChangeStorage : NSObject

@property (readonly, nonatomic) NSString *storageDescription;


-(BOOL)getRelatedScopedIdentifier:(*id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)getStoredChangeType:(*NSUInteger)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;


@end


#endif