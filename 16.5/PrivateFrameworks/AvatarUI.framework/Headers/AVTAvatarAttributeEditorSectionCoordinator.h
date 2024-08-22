// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONCOORDINATOR_H
#define AVTAVATARATTRIBUTEEDITORSECTIONCOORDINATOR_H

@class NSString, NSMutableDictionary;
@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorSectionCoordinator : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *sectionControllers; // ivar: _sectionControllers
@property (readonly) Class superclass;


-(BOOL)isCoordinatingForSectionController:(id)arg0 ;
-(id)init;
-(void)addSectionController:(id)arg0 ;
-(void)attributeEditorSectionController:(id)arg0 didDeleteSectionItems:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didSelectSectionItem:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didUpdateSectionItem:(id)arg1 ;
-(void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg0 ;
-(void)removeSectionController:(id)arg0 ;


@end


#endif