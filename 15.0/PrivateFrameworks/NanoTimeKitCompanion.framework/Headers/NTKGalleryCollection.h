// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGALLERYCOLLECTION_H
#define NTKGALLERYCOLLECTION_H

@class NSString;
@protocol NTKEnumeratableFaceCollection, NTKGalleryCollectionDelegate;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKGalleryCollection : NSObject <NTKEnumeratableFaceCollection>



@property (copy, nonatomic) id *calloutName; // ivar: _calloutName
@property (readonly, nonatomic) BOOL canAddNewFaces;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKGalleryCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NTKFace *newFace;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_astronomyFacesForDevice:(id)arg0 ;
+(id)_blackcombFacesForDevice:(id)arg0 ;
+(id)_kaleidoscopeFacesForDevice:(id)arg0 ;
+(id)_newFacesExcludingRestrictedForDevice:(id)arg0 ;
+(id)_newFacesForDevice:(id)arg0 ;
+(id)_photoFacesForDevice:(id)arg0 ;
+(id)_upNextFacesForDevice:(id)arg0 ;
+(id)_whistlerSubdialsFacesForDevice:(id)arg0 ;
+(id)galleryCollectionsForDevice:(id)arg0 ;
-(NSUInteger)indexOfFace:(id)arg0 ;
-(NSUInteger)numberOfFaces;
-(id)faceAtIndex:(NSUInteger)arg0 ;
-(void)enumerateFaceNamesUsingBlock:(id)arg0 ;


@end


#endif