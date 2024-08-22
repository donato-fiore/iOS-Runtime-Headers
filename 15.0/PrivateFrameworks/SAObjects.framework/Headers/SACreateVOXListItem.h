// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACREATEVOXLISTITEM_H
#define SACREATEVOXLISTITEM_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SACreateVOXListItem : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayHints;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *speakableInSequence;
@property (copy, nonatomic) NSString *speakableStandalone;
@property (readonly) Class superclass;


+(id)createVOXListItem;
+(id)createVOXListItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif