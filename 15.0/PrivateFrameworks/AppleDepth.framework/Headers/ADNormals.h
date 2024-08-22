// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADNORMALS_H
#define ADNORMALS_H


#import <Foundation/Foundation.h>


@interface ADNormals : NSObject



+(NSInteger)normalsFromDepth:(struct __CVBuffer *)arg0 focalLength:(float)arg1 principalPoint:(struct CGPoint )arg2 normalsOutput:(struct __CVBuffer *)arg3 ;
+(NSInteger)normalsFromDepth:(struct __CVBuffer *)arg0 focalLength:(float)arg1 principalPoint:(struct CGPoint )arg2 normalsOutput:(struct __CVBuffer *)arg3 withHelperBuffer:(id)arg4 ;


@end


#endif