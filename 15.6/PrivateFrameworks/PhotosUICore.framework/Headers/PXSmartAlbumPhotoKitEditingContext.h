// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSMARTALBUMPHOTOKITEDITINGCONTEXT_H
#define PXSMARTALBUMPHOTOKITEDITINGCONTEXT_H

@class NSArray, NSString, PHPhotoLibrary;
@protocol PXSmartAlbumEditingContext;

#import <Foundation/Foundation.h>


@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext>



@property (readonly, nonatomic) NSArray *albumValues;
@property (readonly, nonatomic) NSArray *cameraModels;
@property (readonly, nonatomic) NSArray *conditionTypeValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keywordValues;
@property (readonly, nonatomic) NSArray *lensModels;
@property (readonly, nonatomic) NSArray *personNames;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)ISOValuesWithFormatter:(id)arg0 ;
-(id)apertureValuesWithFormatter:(id)arg0 ;
-(id)focalLengthValuesWithFormatter:(id)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)shutterSpeedValuesWithFormatter:(id)arg0 ;


@end


#endif