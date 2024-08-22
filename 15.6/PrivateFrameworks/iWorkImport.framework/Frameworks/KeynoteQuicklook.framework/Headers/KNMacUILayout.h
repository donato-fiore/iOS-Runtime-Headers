// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNMACUILAYOUT_H
#define KNMACUILAYOUT_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying>

 {
    BOOL _showingInspectorPane;
    BOOL _inspectorPaneAutoHidden;
    BOOL _showingNavigatorViewInSidebar;
}


@property (readonly, nonatomic) NSInteger inspectorPaneHiddenState;
@property (readonly, nonatomic) NSInteger inspectorPaneViewMode; // ivar: _inspectorPaneViewMode
@property (readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) BOOL p_showingNavigatorViewInSidebar;
@property (readonly, nonatomic, getter=isShowingElementList) BOOL showingElementList; // ivar: _showingElementList
@property (readonly, nonatomic, getter=isShowingLightTable) BOOL showingLightTable; // ivar: _showingLightTable
@property (readonly, nonatomic, getter=isShowingPresenterNotes) BOOL showingPresenterNotes; // ivar: _showingPresenterNotes
@property (readonly, nonatomic, getter=isShowingSidebar) BOOL showingSidebar; // ivar: _showingSidebar
@property (readonly, nonatomic, getter=isShowingTemplateSlides) BOOL showingTemplateSlides; // ivar: _showingTemplateSlides
@property (readonly, nonatomic) NSInteger sidebarViewMode;


+(id)uiLayoutFromArchive:(*void)arg0 unarchiver:(id)arg1 context:(id)arg2 ;
-(BOOL)inspectorPaneAutoHidden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showingInspectorPane;
-(NSUInteger)hash;
-(id)archivedUILayoutInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setInspectorPaneAutoHidden:(BOOL)arg0 ;
-(void)setShowingInspectorPane:(BOOL)arg0 ;


@end


#endif