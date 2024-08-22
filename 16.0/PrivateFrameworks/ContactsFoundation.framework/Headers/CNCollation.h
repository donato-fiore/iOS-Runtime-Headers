// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOLLATION_H
#define CNCOLLATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CNCollation : NSObject

@property (readonly) NSArray *headerLanguages; // ivar: _headerLanguages
@property (readonly) BOOL indexExtraTokenizations; // ivar: _indexExtraTokenizations
@property (readonly) NSArray *indexSections; // ivar: _indexSections
@property (readonly) NSString *nameTransform; // ivar: _nameTransform
@property (readonly) NSString *searchCollatorIdentifier; // ivar: _searchCollatorIdentifier
@property (readonly) NSString *searchTransform; // ivar: _searchTransform
@property (readonly) NSString *sortCollatorIdentifier; // ivar: _sortCollatorIdentifier


+(id)defaultSortCollatorIdentifier;
+(id)indexSectionsFromPropertyList:(id)arg0 ;
+(id)languageHeaderSectionsFromPropertyList:(id)arg0 collator:(struct UCollator *)arg1 ;
+(id)sectionURL;
-(id)init;
-(id)initWithCollator:(struct UCollator *)arg0 ;
-(id)initWithCollator:(struct UCollator *)arg0 URL:(id)arg1 ;


@end


#endif