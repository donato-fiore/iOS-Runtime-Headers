// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUNIFIEDCOMPOSERECIPIENT_H
#define CNUNIFIEDCOMPOSERECIPIENT_H

@class NSArray;


#import "CNComposeRecipient.h"

@interface CNUnifiedComposeRecipient : CNComposeRecipient {
    NSArray *_children;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsChevronButton;
-(id)children;
-(id)initWithChildren:(id)arg0 defaultChild:(id)arg1 ;
-(id)sortedChildren;


@end


#endif