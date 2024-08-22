// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFITEMPROVIDER_H
#define HFITEMPROVIDER_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFItemProvider : NSObject <NSCopying>



@property (retain, nonatomic) NSSet *clientInvalidationReasons; // ivar: _clientInvalidationReasons
@property (readonly, nonatomic) NSSet *items;


+(BOOL)prefersNonBlockingReloads;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)invalidationReasons;
-(id)reloadItems;
// -(id)reloadItemsWithHomeKitObjects:(id)arg0 filter:(id)arg1 itemMap:(unk)arg2  ;
// -(id)reloadItemsWithObjects:(id)arg0 keyAdaptor:(id)arg1 itemAdaptor:(unk)arg2 filter:(id)arg3 itemMap:(unk)arg4  ;


@end


#endif