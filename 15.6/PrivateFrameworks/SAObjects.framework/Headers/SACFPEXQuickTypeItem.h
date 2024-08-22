// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFPEXQUICKTYPEITEM_H
#define SACFPEXQUICKTYPEITEM_H

@class NSArray, NSString, NSDate;


#import "SACFPEXItem.h"

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *itemFlags;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originatingBundleId;
@property (copy, nonatomic) NSString *originatingWebsiteURL;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *value;


+(id)quickTypeItem;
+(id)quickTypeItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif