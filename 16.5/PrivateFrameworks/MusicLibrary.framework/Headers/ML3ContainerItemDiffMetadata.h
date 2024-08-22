// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CONTAINERITEMDIFFMETADATA_H
#define ML3CONTAINERITEMDIFFMETADATA_H


#import <Foundation/Foundation.h>


@interface ML3ContainerItemDiffMetadata : NSObject

@property (nonatomic) NSInteger containerPersistentID; // ivar: _containerPersistentID
@property (nonatomic) NSInteger itemPersistentID; // ivar: _itemPersistentID
@property (nonatomic) NSInteger newPosition; // ivar: _newPosition
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (nonatomic) NSInteger previousPosition; // ivar: _previousPosition


+(id)diffMetadataWithPersistentID:(NSInteger)arg0 ;
+(id)diffMetadataWithPersistentID:(NSInteger)arg0 containerPersistentID:(NSInteger)arg1 itemPersistentID:(NSInteger)arg2 newPosition:(NSInteger)arg3 previousPosition:(NSInteger)arg4 ;


@end


#endif