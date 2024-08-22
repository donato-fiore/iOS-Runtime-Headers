// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFUSERPHOTOSLIBRARYITEMPROVIDER_H
#define HFUSERPHOTOSLIBRARYITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"

@interface HFUserPhotosLibraryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *userPhotosLibraryItems; // ivar: _userPhotosLibraryItems


-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif