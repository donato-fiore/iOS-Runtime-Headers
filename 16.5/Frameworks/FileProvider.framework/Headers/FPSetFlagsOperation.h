// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSETFLAGSOPERATION_H
#define FPSETFLAGSOPERATION_H



#import "FPTransformOperation.h"

@interface FPSetFlagsOperation : FPTransformOperation {
    NSUInteger _flags;
}




-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 flags:(NSUInteger)arg1 ;
-(id)replicateForItems:(id)arg0 ;


@end


#endif