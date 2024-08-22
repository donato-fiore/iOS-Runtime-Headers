// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISECTIONFOCUSCONTAINERGUIDEPACKAGE_H
#define _UISECTIONFOCUSCONTAINERGUIDEPACKAGE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIFocusCollectionViewSectionContainerGuide.h"

@interface _UISectionFocusContainerGuidePackage : NSObject

@property (readonly, nonatomic) NSArray *focusGuides; // ivar: _focusGuides
@property (retain, nonatomic) _UIFocusCollectionViewSectionContainerGuide *sectionEndFocusGuide; // ivar: _sectionEndFocusGuide
@property (retain, nonatomic) _UIFocusCollectionViewSectionContainerGuide *sectionFocusGuide; // ivar: _sectionFocusGuide


-(void)_updateFocusGuidesArray;


@end


#endif