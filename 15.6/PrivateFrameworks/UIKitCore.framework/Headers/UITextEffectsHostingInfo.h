// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTEFFECTSHOSTINGINFO_H
#define UITEXTEFFECTSHOSTINGINFO_H

@class NSDictionary, NSString;
@protocol _UICanvasBasedObject;

#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject>

 {
    NSUInteger _hostedUseCount;
}


@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *perSceneOptions; // ivar: _perSceneOptions
@property (retain, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (readonly) Class superclass;
@property (nonatomic) BOOL useHostedInstance;


+(id)hostingInfoForWindowScene:(id)arg0 ;
-(BOOL)_matchingOptions:(id)arg0 ;
-(id)_initWithCanvas:(id)arg0 options:(id)arg1 ;


@end


#endif