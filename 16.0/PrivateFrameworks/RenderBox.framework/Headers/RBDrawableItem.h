// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBDRAWABLEITEM_H
#define RBDRAWABLEITEM_H


#import <Foundation/Foundation.h>

#import "RBDisplayList.h"

@interface RBDrawableItem : NSObject {
    objc_ptr<RBDisplayList *> _list;
}


@property (nonatomic) ? clearColor; // ivar: _clearColor
@property (nonatomic) ? destinationOffset; // ivar: _destinationOffset
@property (retain, nonatomic) RBDisplayList *displayList;
@property (nonatomic) int initialState; // ivar: _initialState
@property (nonatomic) ? sourceRect; // ivar: _sourceRect




@end


#endif