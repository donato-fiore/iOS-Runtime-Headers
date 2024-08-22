// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFITEMUPDATEREQUEST_H
#define HFITEMUPDATEREQUEST_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HFItemUpdateRequest : NSObject

@property (readonly, nonatomic) NSSet *itemsProvidersToReload; // ivar: _itemsProvidersToReload
@property (readonly, nonatomic) NSSet *itemsToUpdate; // ivar: _itemsToUpdate
@property (readonly, nonatomic) SEL senderSelector; // ivar: _senderSelector


+(id)requestToReloadItemProviders:(id)arg0 senderSelector:(SEL)arg1 ;
+(id)requestToUpdateItems:(id)arg0 senderSelector:(SEL)arg1 ;
-(id)init;
-(id)initWithItemProviders:(id)arg0 items:(id)arg1 senderSelector:(SEL)arg2 ;


@end


#endif