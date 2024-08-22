// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLHEADLESSACTIONHANDLER_H
#define FLHEADLESSACTIONHANDLER_H


#import <Foundation/Foundation.h>

#import "FLFollowUpItem.h"

@interface FLHeadlessActionHandler : NSObject

@property (retain, nonatomic) FLFollowUpItem *item; // ivar: _item


+(id)handlerWithItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)dealloc;
-(void)handleAction:(id)arg0 completion:(id)arg1 ;
-(void)handleExtensionBasedAction:(id)arg0 completion:(id)arg1 ;


@end


#endif