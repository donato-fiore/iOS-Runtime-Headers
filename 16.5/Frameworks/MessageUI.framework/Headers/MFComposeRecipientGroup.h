// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSERECIPIENTGROUP_H
#define MFCOMPOSERECIPIENTGROUP_H

@class NSArray;


#import "MFComposeRecipient.h"

@interface MFComposeRecipientGroup : MFComposeRecipient {
    NSArray *_children;
}




-(*void)record;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isRemovableFromSearchResults;
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
-(int)property;
-(int)recordID;
-(void)_populateSortedChildren;


@end


#endif