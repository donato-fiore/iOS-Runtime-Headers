// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDETECTOR_H
#define CIDETECTOR_H


#import <Foundation/Foundation.h>


@interface CIDetector : NSObject



+(id)detectorOfType:(id)arg0 context:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg0 ;
-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)init;


@end


#endif