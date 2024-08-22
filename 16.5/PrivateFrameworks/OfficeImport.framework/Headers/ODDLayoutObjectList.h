// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDLAYOUTOBJECTLIST_H
#define ODDLAYOUTOBJECTLIST_H

@class NSMutableArray;


#import "ODDLayoutObject.h"

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}




-(id)children;
-(id)init;
-(void)addChild:(id)arg0 ;


@end


#endif