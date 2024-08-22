// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSMEDIACONTAINERQUOTADATA_H
#define NMSMEDIACONTAINERQUOTADATA_H


#import <Foundation/Foundation.h>


@interface NMSMediaContainerQuotaData : NSObject

@property (readonly, nonatomic) BOOL hasItemsAboveQuota;
@property (nonatomic) BOOL hasRemovedItems; // ivar: _hasRemovedItems
@property (nonatomic) BOOL hasSkippedItems; // ivar: _hasSkippedItems
@property (nonatomic) NSUInteger numItemsAdded; // ivar: _numItemsAdded
@property (weak, nonatomic) id *quotaRefObj; // ivar: _quotaRefObj




@end


#endif