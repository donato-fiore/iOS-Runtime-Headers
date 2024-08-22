// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTVIEWBACKDROPCAPTUREGROUP_H
#define _UIVISUALEFFECTVIEWBACKDROPCAPTUREGROUP_H

@class NSPointerArray, NSString;

#import <Foundation/Foundation.h>


@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray *_backdrops;
}


@property (nonatomic) BOOL disableInPlaceFiltering; // ivar: _disableInPlaceFiltering
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *groupNamespace; // ivar: _groupNamespace
@property (nonatomic) CGFloat minimumScale; // ivar: _minimumScale
@property (nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)allowInPlaceFiltering;
-(NSInteger)indexOfBackdropView:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBackdrop:(id)arg0 ;
-(id)initWithName:(id)arg0 scale:(CGFloat)arg1 ;
-(void)addBackdrop:(id)arg0 update:(BOOL)arg1 ;
-(void)applyScaleHint:(CGFloat)arg0 ;
-(void)removeBackdrop:(id)arg0 update:(BOOL)arg1 ;
-(void)updateAllBackdropViews;


@end


#endif