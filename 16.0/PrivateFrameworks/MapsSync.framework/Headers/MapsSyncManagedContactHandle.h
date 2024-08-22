// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSYNCMANAGEDCONTACTHANDLE_H
#define MAPSSYNCMANAGEDCONTACTHANDLE_H

@class NSManagedObject, NSString;


#import "MapsSyncManagedFavoriteItem.h"

@interface MapsSyncManagedContactHandle : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;
@property (nonatomic, copy) NSString *handle;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif