// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIVNDETECTOR_H
#define CIVNDETECTOR_H



#import "CIDetector.h"
#import "CIContext.h"

@interface CIVNDetector : CIDetector {
    CIContext *context;
}




-(id)featuresInImage:(id)arg0 withContext:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif