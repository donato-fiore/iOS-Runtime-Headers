// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZJSSCENE_H
#define OZJSSCENE_H

@protocol OZSceneJSExport;

#import <Foundation/Foundation.h>


@interface OZJSScene : NSObject <OZSceneJSExport>



@property (nonatomic) *void scene; // ivar: _scene


+(id)sceneWithScene:(*void)arg0 ;
-(id)get3DElementWithID:(unsigned int)arg0 ;
-(id)get3DElementWithName:(id)arg0 ;
-(id)getElementWithID:(unsigned int)arg0 ;
-(id)initWithScene:(*void)arg0 ;


@end


#endif