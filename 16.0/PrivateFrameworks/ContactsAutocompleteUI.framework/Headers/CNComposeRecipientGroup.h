// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOMPOSERECIPIENTGROUP_H
#define CNCOMPOSERECIPIENTGROUP_H

@class NSArray;


#import "CNComposeRecipient.h"

@interface CNComposeRecipientGroup : CNComposeRecipient {
    NSArray *_children;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)showsChevronButton;
-(BOOL)wasCompleteMatch;
-(id)address;
-(id)children;
-(id)childrenWithCompleteMatches;
-(id)commentedAddress;
-(id)completelyMatchedAttributedStrings;
-(id)compositeName;
-(id)displayString;
-(id)initWithChildren:(id)arg0 displayString:(id)arg1 ;
-(id)label;
-(id)placeholderName;
-(id)sortedChildren;
-(id)unlocalizedLabel;
-(void)_populateSortedChildren;
-(void)addRecipientToPasteboard:(id)arg0 ;


@end


#endif