// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOMPOSITIONALLAYOUTSOLVERSECTIONCONTAINERDESCRIPTOR_H
#define _UICOMPOSITIONALLAYOUTSOLVERSECTIONCONTAINERDESCRIPTOR_H

@class NSString;
@protocol _UICollectionLayoutSectionContainerDescriptor;

#import <Foundation/Foundation.h>


@interface _UICompositionalLayoutSolverSectionContainerDescriptor : NSObject <_UICollectionLayoutSectionContainerDescriptor>



@property (nonatomic) BOOL clipsContentToBounds; // ivar: _clipsContentToBounds
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect sectionLayoutFrame; // ivar: _sectionLayoutFrame
@property (readonly) Class superclass;




@end


#endif