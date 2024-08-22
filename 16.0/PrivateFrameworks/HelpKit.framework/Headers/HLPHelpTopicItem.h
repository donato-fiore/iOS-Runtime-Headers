// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPTOPICITEM_H
#define HLPHELPTOPICITEM_H

@class NSString, NSArray;


#import "HLPHelpItem.h"

@interface HLPHelpTopicItem : HLPHelpItem

@property (copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic, getter=isCopyright) BOOL copyright;
@property (readonly, nonatomic, getter=isGlossary) BOOL glossary;
@property (copy, nonatomic) NSString *glossaryIdentifierString; // ivar: _glossaryIdentifierString
@property (copy, nonatomic) NSString *hrefID; // ivar: _hrefID
@property (readonly, nonatomic, getter=isPassionPoints) BOOL passionPoints;


-(BOOL)categoryContainKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 helpBookURL:(id)arg1 serverType:(NSInteger)arg2 ;


@end


#endif