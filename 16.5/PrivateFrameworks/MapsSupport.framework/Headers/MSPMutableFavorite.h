// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEFAVORITE_H
#define MSPMUTABLEFAVORITE_H

@class NSString, NSUUID;
@protocol MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite;

#import <Foundation/Foundation.h>

#import "MSPBookmarkStorage.h"

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite>



@property (readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage; // ivar: _bookmarkStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isImmutable) BOOL immutable; // ivar: _immutable
@property (readonly, nonatomic) NSUUID *storageIdentifier; // ivar: _storageIdentifier
@property (readonly) Class superclass;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableFavoriteForBookmarkStorage:(id)arg0 ;
+(id)mutableObjectProtocol;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg0 ;
-(id)abridgedBookmarkStorageForSpotlightStorage;
-(id)copyIfValidWithError:(*id)arg0 ;
-(id)debugTitle;
-(id)init;
-(id)initWithBookmarkStorage:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)persisterOnlyBookmarkStorage;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;
-(void)_markImmutable;
-(void)_noteWillMutate;
// -(void)ifMutablePlace:(id)arg0 ifMutableRoute:(unk)arg1 ifMutableRegion:(id)arg2 ifMutableTransitLine:(unk)arg3  ;
// -(void)ifPlace:(id)arg0 ifRoute:(unk)arg1 ifRegion:(id)arg2 ifTransitLine:(unk)arg3  ;


@end


#endif