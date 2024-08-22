// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDLAYOUTCONTENT_H
#define PXSECTIONEDLAYOUTCONTENT_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PXSectionedLayoutContent : NSObject {
    NSMutableArray *_sections;
}


@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) CGSize internalContentSize; // ivar: _internalContentSize
@property (readonly, copy, nonatomic) NSArray *sections;


-(id)description;
-(id)init;
-(id)initWithAxis:(NSInteger)arg0 insets:(struct UIEdgeInsets )arg1 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(void)_addSection:(id)arg0 ;
-(void)_adjustSectionsFromIndex:(NSInteger)arg0 ;
-(void)_exchangeSectionAtIndex:(NSUInteger)arg0 withSectionAtIndex:(NSUInteger)arg1 ;
-(void)_insertSection:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_removeSection:(id)arg0 ;
-(void)addSection:(id)arg0 ;
-(void)exchangeSectionAtIndex:(NSUInteger)arg0 withSectionAtIndex:(NSUInteger)arg1 ;
-(void)insertSection:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeAllSections;
-(void)removeSection:(id)arg0 ;
-(void)removeSections:(id)arg0 ;
-(void)updateSections:(id)arg0 ;


@end


#endif