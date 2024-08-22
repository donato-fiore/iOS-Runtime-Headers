// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTCOMPARISONITEM_H
#define SASTCOMPARISONITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SASTComparisonEntity.h"
#import "SAUIDecoratedText.h"

@interface SASTComparisonItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SASTComparisonEntity *firstItem;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASTComparisonEntity *secondItem;
@property (readonly) Class superclass;


+(id)comparisonItem;
+(id)comparisonItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif