// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYSTYLESELECTIONDATASOURCE_H
#define PXSTORYSTYLESELECTIONDATASOURCE_H

@class NSArray;
@protocol PXStoryStyleDescriptor;

#import <Foundation/Foundation.h>


@interface PXStoryStyleSelectionDataSource : NSObject

@property (readonly, nonatomic) NSInteger indexOfCurrentStyle; // ivar: _indexOfCurrentStyle
@property (readonly, nonatomic) NSInteger indexOfCustomStyle; // ivar: _indexOfCustomStyle
@property (readonly, nonatomic) NSInteger numberOfStyles;
@property (readonly, nonatomic) NSObject<PXStoryStyleDescriptor> *styleInfoForCurrentStyle;
@property (readonly, copy, nonatomic) NSArray *styleInfos; // ivar: _styleInfos


-(BOOL)isEqual:(id)arg0 ;
-(id)infosForStylesInRange:(struct _NSRange )arg0 ;
-(id)init;
-(id)initWithStyleInfos:(id)arg0 indexOfCurrentStyle:(NSInteger)arg1 indexOfCustomStyle:(NSInteger)arg2 ;
-(id)songForStyleAtIndex:(NSInteger)arg0 ;
-(id)styleInfoAtIndex:(NSInteger)arg0 ;


@end


#endif