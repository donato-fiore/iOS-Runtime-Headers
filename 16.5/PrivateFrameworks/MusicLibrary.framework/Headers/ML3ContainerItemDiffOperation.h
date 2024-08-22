// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CONTAINERITEMDIFFOPERATION_H
#define ML3CONTAINERITEMDIFFOPERATION_H

@class NSOperation, NSArray;


#import "ML3DatabaseConnection.h"

@interface ML3ContainerItemDiffOperation : NSOperation {
    NSInteger _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    ML3DatabaseConnection *_connection;
}


@property (retain, nonatomic) NSArray *containerItemsToDelete; // ivar: _containerItemsToDelete
@property (retain, nonatomic) NSArray *containerItemsToUpdate; // ivar: _containerItemsToUpdate


-(id)initWithContainerPersistentID:(NSInteger)arg0 updatedItemsPersistentIDs:(id)arg1 connection:(id)arg2 ;
-(void)main;


@end


#endif