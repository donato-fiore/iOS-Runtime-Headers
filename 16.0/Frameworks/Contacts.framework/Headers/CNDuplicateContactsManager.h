// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDUPLICATECONTACTSMANAGER_H
#define CNDUPLICATECONTACTSMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNDuplicateContactsManager : NSObject {
    ? contactStore;
    ? contacts;
    ? findResult;
    ? mergeResult;
    ? didPerformMerge;
}


@property (nonatomic, readonly) NSArray *duplicates;


+(BOOL)applyMergeResultToSaveRequest:(id)arg0 signatures:(id)arg1 ;
+(void)duplicatesCountsWithCompletionHandler:(id)arg0 ;
+(void)refreshManagedDuplicatesWithCompletionHandler:(id)arg0 ;
+(void)updateRecentImagesDatabaseForSignatures:(id)arg0 ;
-(BOOL)applyMergeResultToSaveRequest:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif