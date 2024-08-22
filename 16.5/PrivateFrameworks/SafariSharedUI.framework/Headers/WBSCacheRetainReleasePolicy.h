// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCACHERETAINRELEASEPOLICY_H
#define WBSCACHERETAINRELEASEPOLICY_H

@class NSCountedSet, NSSet;

#import <Foundation/Foundation.h>


@interface WBSCacheRetainReleasePolicy : NSObject {
    id *_purgeBlock;
    NSCountedSet *_entryRetainCounts;
    NSCountedSet *_negativeEntryRetainCounts;
}


@property (readonly, copy, nonatomic) NSSet *retainedKeyStrings;


-(BOOL)isEntryRetainedForKeyString:(id)arg0 ;
-(id)initWithPurgeBlock:(id)arg0 ;
-(void)_releaseEntryForKeyString:(id)arg0 ;
-(void)_retainEntryForKeyString:(id)arg0 ;
-(void)releaseEntriesForKeyStrings:(id)arg0 ;
-(void)releaseEntryForKeyString:(id)arg0 ;
-(void)releaseEntryWithKeyStringProvider:(id)arg0 ;
-(void)retainEntriesForKeyStrings:(id)arg0 ;
-(void)retainEntryForKeyString:(id)arg0 ;
-(void)retainEntryWithKeyStringProvider:(id)arg0 ;


@end


#endif