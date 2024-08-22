// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEDETAILSETTINGSKEYFACESDATASOURCE_H
#define PXPEOPLEDETAILSETTINGSKEYFACESDATASOURCE_H

@class NSString, NSArray, PHPhotoLibrary;
@protocol PXPeopleDetailSettingsDataSource;

#import <Foundation/Foundation.h>


@interface PXPeopleDetailSettingsKeyFacesDataSource : NSObject <PXPeopleDetailSettingsDataSource>



@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keyFaces; // ivar: _keyFaces
@property (readonly, nonatomic) NSUInteger numberOfItems;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(NSInteger)verifyTypeAtIndex:(NSInteger)arg0 ;
-(NSUInteger)faceCount:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 keyFaces:(id)arg1 photoLibrary:(id)arg2 ;
-(id)modelObjectForIndex:(NSInteger)arg0 ;
-(id)personNameAtIndex:(NSInteger)arg0 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 ;


@end


#endif