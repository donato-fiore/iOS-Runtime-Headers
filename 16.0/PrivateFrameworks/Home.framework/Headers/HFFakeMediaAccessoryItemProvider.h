// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFFAKEMEDIAACCESSORYITEMPROVIDER_H
#define HFFAKEMEDIAACCESSORYITEMPROVIDER_H

@class NSMutableSet;


#import "HFItemProvider.h"

@interface HFFakeMediaAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItemTypes; // ivar: _mediaAccessoryItemTypes
@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems; // ivar: _mediaAccessoryItems


-(id)init;
-(id)items;
-(id)reloadItems;


@end


#endif