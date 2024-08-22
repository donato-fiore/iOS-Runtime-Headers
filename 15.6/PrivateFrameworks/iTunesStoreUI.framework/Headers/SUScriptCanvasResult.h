// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTCANVASRESULT_H
#define SUSCRIPTCANVASRESULT_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface SUScriptCanvasResult : NSObject

@property (readonly, nonatomic) UIImage *canvasImage; // ivar: _image
@property (readonly, nonatomic) *CGPath canvasPath; // ivar: _path


-(id)_initWithCanvas:(id)arg0 ;
-(void)dealloc;


@end


#endif