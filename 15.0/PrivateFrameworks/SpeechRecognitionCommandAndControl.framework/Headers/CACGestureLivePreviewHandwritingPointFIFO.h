// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACGESTURELIVEPREVIEWHANDWRITINGPOINTFIFO_H
#define CACGESTURELIVEPREVIEWHANDWRITINGPOINTFIFO_H


#import <Foundation/Foundation.h>

#import "CACGestureLivePreviewHandwritingPointFIFO.h"

@interface CACGestureLivePreviewHandwritingPointFIFO : NSObject

@property (retain, nonatomic) CACGestureLivePreviewHandwritingPointFIFO *nextFIFO; // ivar: _nextFIFO


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint:(struct ? )arg0 ;
-(void)clear;
-(void)emitPoint:(struct ? )arg0 ;
-(void)flush;


@end


#endif