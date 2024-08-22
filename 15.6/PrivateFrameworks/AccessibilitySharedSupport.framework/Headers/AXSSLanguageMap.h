// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSLANGUAGEMAP_H
#define AXSSLANGUAGEMAP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AXSSDialectMap.h"

@interface AXSSLanguageMap : NSObject

@property (retain, nonatomic) NSArray *alternateLanguageIDs; // ivar: _alternateLanguageIDs
@property (nonatomic, getter=isAmbiguous) BOOL ambiguous; // ivar: _ambiguous
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages; // ivar: _associatedAmbiguousLanguages
@property (retain, nonatomic) AXSSDialectMap *defaultDialect; // ivar: _defaultDialect
@property (retain, nonatomic) NSArray *dialects; // ivar: _dialects
@property (copy, nonatomic) NSString *generalLanguageID; // ivar: _generalLanguageID
@property (nonatomic, getter=isRTL) BOOL rtl; // ivar: _rtl
@property (retain, nonatomic) AXSSDialectMap *userLocaleDialect; // ivar: _userLocaleDialect
@property (nonatomic, getter=isWestern) BOOL western; // ivar: _western


-(id)description;
-(id)dialectWithLocaleIdentifier:(id)arg0 ;
-(id)initWithLanguageID:(id)arg0 isWestern:(BOOL)arg1 isAmbiguous:(BOOL)arg2 isRTL:(BOOL)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6 ;


@end


#endif