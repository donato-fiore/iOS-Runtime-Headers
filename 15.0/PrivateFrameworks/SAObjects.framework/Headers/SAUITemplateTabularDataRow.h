// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATETABULARDATAROW_H
#define SAUITEMPLATETABULARDATAROW_H

@class NSArray;


#import "SAUITemplateTabularDataGroup.h"

@interface SAUITemplateTabularDataRow : SAUITemplateTabularDataGroup

@property (copy, nonatomic) NSArray *actions;


+(id)tabularDataRow;
+(id)tabularDataRowWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif