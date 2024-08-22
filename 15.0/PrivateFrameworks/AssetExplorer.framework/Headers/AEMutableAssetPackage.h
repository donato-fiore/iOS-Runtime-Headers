// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEMUTABLEASSETPACKAGE_H
#define AEMUTABLEASSETPACKAGE_H



#import "AEAssetPackage.h"

@interface AEMutableAssetPackage : AEAssetPackage



-(id)_copyMetadataFromDisplayAsset:(id)arg0 ;
-(id)initWithAssetIdentifier:(id)arg0 ;
-(void)addSidecarEntriesFromDictionary:(id)arg0 ;
-(void)beginSupressingLivePhoto;
-(void)endSuppressingLivePhoto;
-(void)expressURLForType:(id)arg0 ;
-(void)removeSidecarObjectForKey:(id)arg0 ;
-(void)removeURLForType:(id)arg0 ;
-(void)setMediaOrigin:(NSInteger)arg0 ;
-(void)setSidecarObject:(id)arg0 forKey:(id)arg1 ;
-(void)storeMetadataFromPHAsset:(id)arg0 imageURL:(id)arg1 adjustmentURL:(id)arg2 ;
-(void)storeMetadataFromReviewAsset:(id)arg0 ;
-(void)storeURL:(id)arg0 forType:(id)arg1 ;
-(void)suppressURLForType:(id)arg0 ;


@end


#endif