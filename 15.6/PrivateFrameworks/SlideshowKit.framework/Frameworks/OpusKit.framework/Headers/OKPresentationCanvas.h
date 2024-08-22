// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRESENTATIONCANVAS_H
#define OKPRESENTATIONCANVAS_H

@class NSString, NSMutableDictionary;
@protocol OKPresentationCanvasSubclassingHooks, NSCopying;

#import <Foundation/Foundation.h>

#import "OKPresentation.h"

@interface OKPresentationCanvas : NSObject <OKPresentationCanvasSubclassingHooks, NSCopying>

 {
    id *_parent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isResolved; // ivar: _isResolved
@property (nonatomic) BOOL isTemplate; // ivar: _isTemplate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) id *parent;
@property (nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (copy, nonatomic) NSMutableDictionary *properties; // ivar: _properties
@property (readonly, copy, nonatomic) NSMutableDictionary *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (readonly, copy, nonatomic) NSMutableDictionary *userSettings; // ivar: _userSettings
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)canvasWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)keyPath;
-(id)mergedSettings;
-(void)addSettingsFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)parentApplyValueForKeyPath:(id)arg0 ;
-(void)resolveIfNeeded;


@end


#endif