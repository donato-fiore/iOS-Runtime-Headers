// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTOPASSETSSEARCHRESULT_H
#define PLTOPASSETSSEARCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PSITopAssetsResult.h"

@interface PLTopAssetsSearchResult : NSObject

@property (readonly, nonatomic) NSUInteger assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) PSITopAssetsResult *topAssetsResults; // ivar: _topAssetsResults


-(id)initWithTopAssetsResult:(id)arg0 ;


@end


#endif