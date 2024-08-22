// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOLLECTIONLAYOUTENVIRONMENT_H
#define NSCOLLECTIONLAYOUTENVIRONMENT_H

@class NSString;
@protocol NSCollectionLayoutEnvironment_Private, _UIDataSourceSnapshotTranslating, NSCollectionLayoutContainer;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private>



@property (retain, nonatomic) NSObject<_UIDataSourceSnapshotTranslating> *_dataSourceSnapshot; // ivar: __dataSourceSnapshot
@property (nonatomic) NSInteger _sectionIndex; // ivar: __sectionIndex
@property (nonatomic) BOOL _wantsCollapsedTopSpacing; // ivar: __wantsCollapsedTopSpacing
@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(id)initWithContainer:(id)arg0 traitCollection:(id)arg1 dataSourceSnapshot:(id)arg2 ;
-(id)initWithContainer:(id)arg0 traitCollection:(id)arg1 dataSourceSnapshot:(id)arg2 sectionIndex:(NSInteger)arg3 wantsCollapsedTopSpacing:(BOOL)arg4 ;


@end


#endif