// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREMOVEFROMWISHLISTOPERATION_H
#define SKUIREMOVEFROMWISHLISTOPERATION_H

@class NSOperation;



@interface SKUIRemoveFromWishlistOperation : NSOperation {
    NSInteger _entityID;
    NSInteger _itemID;
    NSInteger _reason;
}




-(id)initWithItemIdentifier:(NSInteger)arg0 entityIdentifier:(NSInteger)arg1 reason:(NSInteger)arg2 ;
-(void)main;


@end


#endif