// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGLRENDERBUFFER_H
#define TSCH3DGLRENDERBUFFER_H

@class NSString;
@protocol TSCH3DGLBindable;

#import <Foundation/Foundation.h>


@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable>

 {
    unsigned int _buffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)valid;
-(id)initWithGLBuffer:(unsigned int)arg0 ;
-(void)bindInSession:(id)arg0 ;
-(void)deactivateInContext:(id)arg0 ;
-(void)dealloc;
-(void)destroyResourcesInContext:(id)arg0 ;


@end


#endif