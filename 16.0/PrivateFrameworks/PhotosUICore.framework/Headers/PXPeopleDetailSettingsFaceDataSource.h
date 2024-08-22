// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEDETAILSETTINGSFACEDATASOURCE_H
#define PXPEOPLEDETAILSETTINGSFACEDATASOURCE_H

@class NSString, PHFetchResult;
@protocol PXPeopleDetailSettingsDataSource;

#import <Foundation/Foundation.h>


@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource>



@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *faces; // ivar: _faces
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfItems;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 faces:(id)arg1 ;
-(id)modelObjectForIndex:(NSInteger)arg0 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
-(void)imageAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 ;


@end


#endif