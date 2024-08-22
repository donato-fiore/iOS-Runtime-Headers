// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCOLLECTION_H
#define MSPCOLLECTION_H

@class NSLock, NSUUID, NSString, NSArray;
@protocol MSPMutableObject, MSPImmutableObject;


#import "MSPCollectionStorage.h"
#import "MSPCollectionItemReplica.h"

@interface MSPCollection : MSPCollectionStorage <MSPMutableObject, MSPImmutableObject>

 {
    NSLock *_lock;
    NSUUID *_storageIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFavoritesCollection;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) MSPCollectionItemReplica *itemReplica; // ivar: _itemReplica
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyIfValidWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 storageIdentifier:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)storageIdentifier;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;
-(void)_noteWillMutate;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)mergeFromCollection:(id)arg0 isUserVisibleChange:(*BOOL)arg1 ;
-(void)removeItem:(id)arg0 ;
-(void)removeItems:(id)arg0 ;
-(void)setCollectionDescription:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageURL:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif