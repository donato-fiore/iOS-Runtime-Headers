// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPMODEL_H
#define VKMAPMODEL_H

@class NSArray;
@protocol VKMapModelDelegate;

#import <Foundation/Foundation.h>


@interface VKMapModel : NSObject {
    NSInteger _tileSize;
    *void _mapEngineSettings;
    *AnimationRunner _animationRunner;
    *void _renderer;
    mutex _rendererMutex;
    *void _logicManager;
    FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr<gss::StylesheetQuery<gss::PropertyID>> _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    shared_ptr<md::TaskContext> _taskContext;
}


@property (nonatomic) NSObject<VKMapModelDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableTransitLines; // ivar: _disableTransitLines
@property (nonatomic) unsigned char labelScaleFactor; // ivar: _labelScaleFactor
@property (nonatomic) BOOL localizeLabels; // ivar: _localizeLabels
@property (nonatomic) int mapType;
@property (nonatomic) float standardMapZoomLevelTransitionZ; // ivar: _standardMapZoomLevelTransitionZ
@property (readonly, nonatomic) NSArray *visibleTileSets; // ivar: _visibleTileSets


-(?)initWithTarget:(?)arg0 renderer:(?)arg1 taskContext:(?)arg2 logicManager:(?)arg3 mapEngineSettingsanimationRunner;
-(?)setStyleManagerforRealistic;
-(CGFloat)northYaw;
-(id)navigationPuck;
-(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> )_styleManager;
-(void)_setStyleManagerFromMapType:(int)arg0 ;
-(void)dealloc;
-(void)debugHighlightObjectAtPoint:(struct CGPoint )arg0 highlightTarget:(unsigned char)arg1 ;
-(void)destroyRenderer;
-(void)forceMapType:(int)arg0 animated:(BOOL)arg1 ;
-(void)layoutWithContext:(*void)arg0 ;
-(void)performStylesheetDidReload;
-(void)reloadStylesheet;
-(void)updateMapDrawStyleWithContext:(*void)arg0 ;


@end


#endif