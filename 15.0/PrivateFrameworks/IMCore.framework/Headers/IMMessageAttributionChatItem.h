// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGEATTRIBUTIONCHATITEM_H
#define IMMESSAGEATTRIBUTIONCHATITEM_H

@class NSDictionary, NSString;


#import "IMMessageStatusChatItem.h"

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem

@property (readonly, copy, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (readonly, nonatomic) NSInteger attributionType; // ivar: _attributionType
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL showsLearnMoreLink; // ivar: _showsLearnMoreLink


-(id)_initWithItem:(id)arg0 attributionInfo:(id)arg1 attributionType:(NSInteger)arg2 showsLearnMoreLink:(BOOL)arg3 ;


@end


#endif