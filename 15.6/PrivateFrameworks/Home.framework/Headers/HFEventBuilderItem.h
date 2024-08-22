// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFEVENTBUILDERITEM_H
#define HFEVENTBUILDERITEM_H

@class NSString, NSSet;


#import "HFItem.h"
#import "HFTriggerNaturalLanguageOptions.h"
#import "HFEventBuilder.h"

@interface HFEventBuilderItem : HFItem

@property (retain, nonatomic) NSString *comparisonKey; // ivar: _comparisonKey
@property (retain, nonatomic) NSSet *eventBuilders; // ivar: _eventBuilders
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions; // ivar: _naturalLanguageOptions
@property (retain, nonatomic) HFEventBuilder *representativeEventBuilder; // ivar: _representativeEventBuilder


+(id)eventBuilderItemForEventBuilders:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithEventBuilders:(id)arg0 ;


@end


#endif