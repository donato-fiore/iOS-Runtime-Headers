// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERQUEUEMODIFICATIONDESCRIPTION_H
#define AVPLAYERQUEUEMODIFICATIONDESCRIPTION_H


#import <Foundation/Foundation.h>

#import "AVPlayerItem.h"

@interface AVPlayerQueueModificationDescription : NSObject

@property (readonly, nonatomic) AVPlayerItem *afterItem; // ivar: _afterItem
@property (readonly, nonatomic) AVPlayerItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger modificationType; // ivar: _modificationType


+(id)modificationForInsertingItem:(id)arg0 afterItem:(id)arg1 ;
+(id)modificationForRemovingItem:(id)arg0 ;
-(id)init;
-(id)initWithModificationType:(NSInteger)arg0 item:(id)arg1 afterItem:(id)arg2 ;
-(void)dealloc;


@end


#endif