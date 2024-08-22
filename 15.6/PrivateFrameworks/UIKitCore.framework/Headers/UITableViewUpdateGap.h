// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWUPDATEGAP_H
#define UITABLEVIEWUPDATEGAP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIUpdateItem.h"

@interface UITableViewUpdateGap : NSObject {
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    ? _gapFlags;
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
}




-(id)description;
-(id)init;


@end


#endif