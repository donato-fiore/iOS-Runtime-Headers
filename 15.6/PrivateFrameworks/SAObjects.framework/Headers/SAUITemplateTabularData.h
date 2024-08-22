// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITEMPLATETABULARDATA_H
#define SAUITEMPLATETABULARDATA_H

@class NSArray, NSString, NSNumber;
@protocol SAUITemplateItem;


#import "SAUITemplateBaseItem.h"

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (nonatomic) BOOL allowContentScrolling;
@property (copy, nonatomic) NSArray *columns;
@property (retain, nonatomic) NSObject<SAUITemplateItem> *footerItem;
@property (retain, nonatomic) NSObject<SAUITemplateItem> *headerItem;
@property (copy, nonatomic) NSString *layoutStyle;
@property (copy, nonatomic) NSNumber *minimumRowHeight;
@property (copy, nonatomic) NSArray *rowStyleRules;
@property (nonatomic) BOOL showHeaderDivider;


+(id)tabularData;
+(id)tabularDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif