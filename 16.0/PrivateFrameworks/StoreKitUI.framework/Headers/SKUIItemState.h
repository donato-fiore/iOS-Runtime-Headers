// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMSTATE_H
#define SKUIITEMSTATE_H

@class NSArray, NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIStoreIdentifier.h"

@interface SKUIItemState : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL activeStateIsPreview;
@property (readonly, nonatomic) NSUInteger allContentFlags;
@property (nonatomic) NSUInteger downloadContentFlags; // ivar: _downloadContentFlags
@property (copy, nonatomic) NSArray *downloadIdentifiers; // ivar: _downloadIdentifiers
@property (copy, nonatomic) NSString *downloadPhase; // ivar: _downloadPhase
@property (nonatomic) float downloadProgress; // ivar: _downloadProgress
@property (copy, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSUInteger libraryContentFlags; // ivar: _libraryContentFlags
@property (nonatomic) NSInteger mediaCategory; // ivar: _mediaCategory
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif