// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMICRODATAITEM_H
#define SGMICRODATAITEM_H

@class NSArray, NSSet;


#import "SGMicrodataItemScope.h"

@interface SGMicrodataItem : SGMicrodataItemScope

@property (readonly, nonatomic) NSArray *itemRef; // ivar: _itemRef
@property (readonly, nonatomic) NSSet *itemType; // ivar: _itemType


-(id)initWithItemType:(id)arg0 itemRef:(id)arg1 ;
-(void)resolveItemRefsWithDocument:(id)arg0 ;


@end


#endif