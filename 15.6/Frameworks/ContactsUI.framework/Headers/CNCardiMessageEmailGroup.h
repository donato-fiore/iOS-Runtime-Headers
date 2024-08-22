// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCARDIMESSAGEEMAILGROUP_H
#define CNCARDIMESSAGEEMAILGROUP_H

@class NSArray;


#import "CNCardPropertyGroup.h"

@interface CNCardiMessageEmailGroup : CNCardPropertyGroup {
    NSArray *_displayItems;
}




-(id)displayItems;
-(id)initWithContact:(id)arg0 propertyItem:(id)arg1 ;


@end


#endif