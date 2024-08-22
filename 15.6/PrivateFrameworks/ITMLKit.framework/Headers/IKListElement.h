// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKLISTELEMENT_H
#define IKLISTELEMENT_H



#import "IKCollectionElement.h"
#import "IKViewElement.h"

@interface IKListElement : IKCollectionElement

@property (readonly, nonatomic) BOOL isLeftAligned;
@property (readonly, retain, nonatomic) IKViewElement *relatedContent;




@end


#endif