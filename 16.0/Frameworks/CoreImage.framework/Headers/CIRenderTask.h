// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIRENDERTASK_H
#define CIRENDERTASK_H


#import <Foundation/Foundation.h>


@interface CIRenderTask : NSObject {
    *void _priv;
}




+(id)rendertaskWithInternalTask:(*void)arg0 ;
-(*void)internalRepresentation;
-(id)_pdfDataRepresentation;
-(id)init;
-(id)initWithInternalTask:(*void)arg0 ;
-(id)waitUntilCompletedAndReturnError:(*id)arg0 ;
-(void)dealloc;


@end


#endif