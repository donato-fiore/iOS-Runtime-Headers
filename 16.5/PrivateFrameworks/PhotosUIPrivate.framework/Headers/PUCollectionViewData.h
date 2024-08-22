// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCOLLECTIONVIEWDATA_H
#define PUCOLLECTIONVIEWDATA_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PUCollectionViewData : NSObject

@property (readonly, nonatomic) NSInteger cachedPageCount; // ivar: _cachedPageCount
@property (nonatomic) CGRect currentContentBounds; // ivar: _currentContentBounds
@property (readonly, nonatomic) NSMutableArray *itemLayoutAttributes; // ivar: _itemLayoutAttributes
@property (readonly, nonatomic) NSMutableDictionary *itemLayoutAttributesByIndexPath; // ivar: _itemLayoutAttributesByIndexPath


-(BOOL)hasReferenceIndexPath;
-(id)init;
-(void)invalidate;


@end


#endif