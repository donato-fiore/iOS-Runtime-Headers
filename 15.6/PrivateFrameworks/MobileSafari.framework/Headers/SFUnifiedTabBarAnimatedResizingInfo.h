// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDTABBARANIMATEDRESIZINGINFO_H
#define SFUNIFIEDTABBARANIMATEDRESIZINGINFO_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface SFUnifiedTabBarAnimatedResizingInfo : NSObject

@property (readonly, nonatomic) NSSet *itemsToKeepVisible; // ivar: _itemsToKeepVisible
@property (readonly, nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset


-(id)initWithItemsToKeepVisible:(id)arg0 targetContentOffset:(struct CGPoint )arg1 ;


@end


#endif