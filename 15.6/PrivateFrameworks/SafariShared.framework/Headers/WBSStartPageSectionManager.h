// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSTARTPAGESECTIONMANAGER_H
#define WBSSTARTPAGESECTIONMANAGER_H

@class NSArray, NSNumber;
@protocol WBSStartPageSectionManagerStorage;

#import <Foundation/Foundation.h>


@interface WBSStartPageSectionManager : NSObject {
    NSObject<WBSStartPageSectionManagerStorage> *_storage;
    NSArray *_cachedSections;
    NSInteger _ignoreChanges;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *cloudKitStartPageSectionOrder;
@property (readonly, nonatomic) NSArray *enabledSectionIdentifiers;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSNumber *test_siriSuggestionsEnabled; // ivar: _test_siriSuggestionsEnabled


+(id)allSections;
+(id)defaultManager;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)sectionForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetToDefault;
-(void)saveSections:(id)arg0 andUpdateInMemoryCache:(BOOL)arg1 ;
-(void)setSectionIdentifier:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif