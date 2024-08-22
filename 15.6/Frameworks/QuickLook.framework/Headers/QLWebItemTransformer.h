// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLWEBITEMTRANSFORMER_H
#define QLWEBITEMTRANSFORMER_H



#import "QLItemTransformer.h"

@interface QLWebItemTransformer : QLItemTransformer



+(id)allowedOutputClasses;
-(id)transformedContentsFromData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)transformedContentsFromURL:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif