// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSMECARD_H
#define MAPSSUGGESTIONSMECARD_H

@class NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsMeCard : NSObject <NSCopying>

 {
    NSDictionary *_perCNPostalAddress;
}


@property (readonly, nonatomic) BOOL hasCorrected; // ivar: _hasCorrected
@property (readonly, nonatomic) BOOL hasGeocoded; // ivar: _hasGeocoded
@property (readonly, nonatomic) BOOL hasHomeOrWork; // ivar: _hasHomeOrWork
@property (readonly, nonatomic) BOOL hasHomeOrWorkOrSchool; // ivar: _hasHomeOrWorkOrSchool
@property (readonly, nonatomic) NSArray *hiddenShortcutsForHome; // ivar: _hiddenShortcutsForHome
@property (readonly, nonatomic) NSArray *hiddenShortcutsForSchool; // ivar: _hiddenShortcutsForSchool
@property (readonly, nonatomic) NSArray *hiddenShortcutsForWork; // ivar: _hiddenShortcutsForWork
@property (readonly, nonatomic) NSArray *mapItemsForAll; // ivar: _mapItemsForAll
@property (readonly, nonatomic) NSArray *mapItemsForHome; // ivar: _mapItemsForHome
@property (readonly, nonatomic) NSArray *mapItemsForSchool; // ivar: _mapItemsForSchool
@property (readonly, nonatomic) NSArray *mapItemsForWork; // ivar: _mapItemsForWork
@property (readonly, nonatomic) NSArray *shortcutsForAll; // ivar: _shortcutsForAll
@property (readonly, nonatomic) NSArray *shortcutsForAllIncludingHidden; // ivar: _shortcutsForAllIncludingHidden
@property (readonly, nonatomic) NSArray *shortcutsForHome; // ivar: _shortcutsForHome
@property (readonly, nonatomic) NSArray *shortcutsForSchool; // ivar: _shortcutsForSchool
@property (readonly, nonatomic) NSArray *shortcutsForWork; // ivar: _shortcutsForWork


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMeCard:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithShortcuts:(id)arg0 hasCorrected:(BOOL)arg1 hasGeocoded:(BOOL)arg2 ;
-(id)initWithShortcuts:(id)arg0 perCNPostalAddress:(id)arg1 hasCorrected:(BOOL)arg2 hasGeocoded:(BOOL)arg3 ;
-(id)shortcutForCNPostalAddressIdentifier:(id)arg0 ;
-(id)shortcutsPerCNPostalAddress;


@end


#endif