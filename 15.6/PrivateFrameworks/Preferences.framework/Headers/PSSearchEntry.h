// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSEARCHENTRY_H
#define PSSEARCHENTRY_H

@class NSString, NSURL, NSArray, NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PSSpecifierAction.h"
#import "PSSpecifier.h"
#import "PSSearchEntry.h"

@interface PSSearchEntry : NSObject {
    NSString *_name;
    NSURL *_url;
    NSString *_identifier;
    BOOL _isSection;
    BOOL _hasDetailController;
    BOOL _hasListController;
    NSArray *_additionalDetailTextComponents;
}


@property (retain, nonatomic) PSSpecifierAction *action; // ivar: _action
@property (copy, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (readonly, nonatomic) NSMutableSet *childEntries; // ivar: _childEntries
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isRootURL; // ivar: _isRootURL
@property (readonly, nonatomic) NSMutableArray *keywords; // ivar: _keywords
@property (copy, nonatomic) NSString *manifestBundleName; // ivar: _manifestBundleName
@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) PSSearchEntry *parentEntry; // ivar: _parentEntry
@property (copy, nonatomic) NSString *plistName; // ivar: _plistName
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly, copy, nonatomic) NSURL *url;


+(id)schemeNameOverride;
+(void)setSchemeNameOverride:(id)arg0 ;
-(BOOL)_specifier:(id)arg0 hasDetailController:(BOOL)arg1 ;
-(BOOL)finishIndexing;
-(BOOL)hasDetailController;
-(BOOL)hasFinishedIndexing;
-(BOOL)hasListController;
-(BOOL)isRootEntry;
-(BOOL)isRootUrl;
-(BOOL)isSectionEntry;
-(id)_prefsURLIsRoot:(*BOOL)arg0 ;
-(id)ancestorEntries;
-(id)debugDescription;
-(id)description;
-(id)detailTextWithEffectiveTitle:(*id)arg0 ;
-(id)hierarchyDescription;
-(id)initWithSpecifier:(id)arg0 parent:(id)arg1 ;
-(id)recursiveDescription;
-(id)recursiveDescriptionForLevel:(NSUInteger)arg0 ;
-(id)rootEntry;
-(id)sectionEntry;


@end


#endif