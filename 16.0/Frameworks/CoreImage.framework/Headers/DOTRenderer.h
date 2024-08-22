// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOTRENDERER_H
#define DOTRENDERER_H

@class NSURL, NSString;
@protocol CIGVRenderer;

#import <Foundation/Foundation.h>


@interface DOTRenderer : NSObject <CIGVRenderer>

 {
    *__sFILE file;
    NSURL *fileURL;
    NSString *fileTitle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int direction; // ivar: direction
@property BOOL drawEdgesFirst; // ivar: drawEdgesFirst
@property (readonly) NSUInteger hash;
@property CGSize separation; // ivar: separation
@property (readonly) Class superclass;


-(BOOL)setCanvasWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)drawEdge:(id)arg0 withPath:(id)arg1 ;
-(void)drawNode:(id)arg0 ;
-(void)flushRender;
-(void)setFileTitle:(id)arg0 ;
-(void)setFileURL:(id)arg0 ;


@end


#endif