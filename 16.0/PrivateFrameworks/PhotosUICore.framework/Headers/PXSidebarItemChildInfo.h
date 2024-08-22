// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSIDEBARITEMCHILDINFO_H
#define PXSIDEBARITEMCHILDINFO_H

@class PHCollection, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXSidebarItemChildInfo : NSObject

@property (readonly, nonatomic) NSInteger childIndexInFetchResult; // ivar: _childIndexInFetchResult
@property (readonly, nonatomic) PHCollection *collection; // ivar: _collection
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult


-(id)initWithListItem:(id)arg0 dataSection:(id)arg1 childIndex:(NSInteger)arg2 ;


@end


#endif