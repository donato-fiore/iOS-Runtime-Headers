// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIRECTANGLEDETECTOR_H
#define CIRECTANGLEDETECTOR_H

@class NSMutableDictionary;


#import "CIDetector.h"
#import "CIContext.h"

@interface CIRectangleDetector : CIDetector {
    NSMutableDictionary *featureOptions;
}


@property (retain, nonatomic) CIContext *context; // ivar: context


-(id)featuresInImage:(id)arg0 ;
-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(void)dealloc;
-(void)releaseResources;


@end


#endif