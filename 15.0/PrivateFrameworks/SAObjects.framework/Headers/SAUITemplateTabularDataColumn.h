// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATETABULARDATACOLUMN_H
#define SAUITEMPLATETABULARDATACOLUMN_H

@class NSNumber, NSArray;


#import "SAUITemplateBaseItem.h"

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (copy, nonatomic) NSNumber *minimumWidth;
@property (copy, nonatomic) NSNumber *rightMargin;
@property (copy, nonatomic) NSArray *values;


+(id)tabularDataColumn;
+(id)tabularDataColumnWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif