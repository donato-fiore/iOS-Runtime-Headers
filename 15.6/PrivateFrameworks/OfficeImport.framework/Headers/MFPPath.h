// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPPATH_H
#define MFPPATH_H


#import <Foundation/Foundation.h>

#import "OITSUBezierPath.h"

@interface MFPPath : NSObject {
    OITSUBezierPath *mPath;
}




-(id)initWithPath:(id)arg0 ;
-(id)path;
-(void)dealloc;


@end


#endif