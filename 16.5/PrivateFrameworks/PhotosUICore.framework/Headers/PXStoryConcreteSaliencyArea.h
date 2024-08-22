// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETESALIENCYAREA_H
#define PXSTORYCONCRETESALIENCYAREA_H

@protocol PXStorySaliencyArea;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteSaliencyArea : NSObject <PXStorySaliencyArea>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGRect contentsRect; // ivar: _contentsRect


-(id)init;
-(id)initWithContentsRect:(struct CGRect )arg0 confidence:(float)arg1 ;


@end


#endif