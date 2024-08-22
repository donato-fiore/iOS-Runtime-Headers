// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNSPRITEKITEVENTHANDLER_H
#define SCNSPRITEKITEVENTHANDLER_H

@class NSMutableDictionary, SKScene;

#import <Foundation/Foundation.h>


@interface SCNSpriteKitEventHandler : NSObject {
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}


@property (retain, nonatomic) SKScene *scene; // ivar: _scene


-(BOOL)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif