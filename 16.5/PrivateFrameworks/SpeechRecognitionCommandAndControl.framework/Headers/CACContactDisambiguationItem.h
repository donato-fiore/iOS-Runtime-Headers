// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCONTACTDISAMBIGUATIONITEM_H
#define CACCONTACTDISAMBIGUATIONITEM_H

@class CNContact, NSString, CNLabeledValue;


#import "CACDisambiguationItem.h"

@interface CACContactDisambiguationItem : CACDisambiguationItem

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly) NSString *contactDisplayLabel;
@property (readonly) NSString *contactDisplayValue;
@property (retain, nonatomic) CNLabeledValue *contactLabeledValue; // ivar: _contactLabeledValue


-(id)displayDescription;
-(id)displayName;
-(id)initWithContact:(id)arg0 labeledValue:(id)arg1 type:(NSInteger)arg2 ;
-(void)startInteraction;


@end


#endif