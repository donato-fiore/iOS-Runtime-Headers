// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSPERSONNAMECOMPONENTSSTYLEFORMATTER_H
#define _NSPERSONNAMECOMPONENTSSTYLEFORMATTER_H

@class NSSet, NSLocale, NSArray;

#import <Foundation/Foundation.h>

#import "_NSPersonNameComponentsStyleFormatter.h"
#import "NSPersonNameComponentsFormatter.h"

@interface _NSPersonNameComponentsStyleFormatter : NSObject {
    NSSet *_abbreviatedKeys;
    NSSet *_keysOfInterest;
    BOOL _shouldFallBack;
    BOOL _isEnabled;
    NSInteger _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
}


@property (readonly) NSSet *abbreviatedKeys;
@property (readonly, copy) NSArray *fallbackDescriptor;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter; // ivar: _fallbackStyleFormatter
@property (readonly) BOOL isEnabled;
@property (readonly) NSSet *keysOfInterest;
@property (readonly, copy) NSPersonNameComponentsFormatter *masterFormatter; // ivar: _masterFormatter
@property (readonly) NSArray *orderedKeysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property NSInteger ordering;
@property (readonly) BOOL shouldFallBack;
@property (readonly) BOOL shouldIgnoreComponentsContainingSpecialCharacters;


-(BOOL)fullComponentsAreValid:(id)arg0 ;
-(id)_delimiterBetweenString:(id)arg0 andString:(id)arg1 isPhonetic:(BOOL)arg2 ;
-(id)_formattedStringFromOrderedKeys:(id)arg0 components:(id)arg1 attributesByRange:(id)arg2 ;
-(id)_orderedNonEmptyKeysFromComponents:(id)arg0 ;
-(id)annotatedStringFromPersonNameComponents:(id)arg0 ;
-(id)initWithMasterFormatter:(id)arg0 ;
-(id)stringFromComponents:(id)arg0 attributesByRange:(id)arg1 ;
-(void)_releaseIvars;
-(void)dealloc;


@end


#endif