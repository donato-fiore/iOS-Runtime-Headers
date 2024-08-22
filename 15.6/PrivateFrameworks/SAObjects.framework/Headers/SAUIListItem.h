// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUILISTITEM_H
#define SAUILISTITEM_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "SAAceView.h"

@interface SAUIListItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelValue;
@property (retain, nonatomic) NSObject<SAAceSerializable> *object;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *selectionText;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *title;


+(id)listItem;
+(id)listItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif