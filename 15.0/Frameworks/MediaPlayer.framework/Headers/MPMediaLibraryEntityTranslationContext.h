// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYENTITYTRANSLATIONCONTEXT_H
#define MPMEDIALIBRARYENTITYTRANSLATIONCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPModelKind.h"

@interface MPMediaLibraryEntityTranslationContext : NSObject

@property (retain, nonatomic) NSArray *allowedEntityIdentifiers; // ivar: _allowedEntityIdentifiers
@property (retain, nonatomic) NSString *filterText; // ivar: _filterText
@property (nonatomic) NSUInteger filteringOptions; // ivar: _filteringOptions
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) MPModelKind *modelKind; // ivar: _modelKind
@property (nonatomic, getter=isMultiQuery) BOOL multiQuery; // ivar: _multiQuery
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSArray *scopedContainers; // ivar: _scopedContainers




@end


#endif