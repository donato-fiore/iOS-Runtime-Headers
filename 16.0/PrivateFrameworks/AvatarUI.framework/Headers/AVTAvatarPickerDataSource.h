// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARPICKERDATASOURCE_H
#define AVTAVATARPICKERDATASOURCE_H

@class NSArray;
@protocol AVTAvatarListItem, AVTAvatarStore;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTAvatarRecordDataSource.h"

@interface AVTAvatarPickerDataSource : NSObject

@property (retain, nonatomic) NSObject<AVTAvatarListItem> *addItem; // ivar: _addItem
@property (nonatomic) BOOL allowAddItem; // ivar: _allowAddItem
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) AVTAvatarRecordDataSource *recordDataSource; // ivar: _recordDataSource
@property (readonly, nonatomic) NSObject<AVTAvatarStore> *store;


-(BOOL)canCreateMemoji;
-(BOOL)isItemAtIndexAddItem:(NSInteger)arg0 ;
-(NSInteger)indexOfAddItem;
-(NSInteger)numberOfItems;
-(id)initWithRecordDataSource:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(void)reloadModel;


@end


#endif