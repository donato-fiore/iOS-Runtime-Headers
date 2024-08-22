// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSPOTLIGHTCOALESCEDDELETIONOPERATION_H
#define _CDSPOTLIGHTCOALESCEDDELETIONOPERATION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CDSpotlightCoalescedDeletionOperation : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleIdToDomainCompletionBlocks; // ivar: _bundleIdToDomainCompletionBlocks
@property (retain, nonatomic) NSMutableDictionary *bundleIdToDomainIdentifiers; // ivar: _bundleIdToDomainIdentifiers
@property (retain, nonatomic) NSMutableDictionary *bundleIdToItemCompletionBlocks; // ivar: _bundleIdToItemCompletionBlocks
@property (retain, nonatomic) NSMutableDictionary *bundleIdToItemIdentifiers; // ivar: _bundleIdToItemIdentifiers


-(BOOL)addDeletion:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleIdToIdentifiers:(id)arg0 bundleIdToCompletionBlocks:(id)arg1 bundleIdToDomainIdentifiers:(id)arg2 bundleIdToDomainCompletionBlocks:(id)arg3 ;
-(void)enumerateDeletionPredicatesAndCompletionsWithBlock:(id)arg0 ;


@end


#endif