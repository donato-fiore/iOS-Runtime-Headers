// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPSETTAGSOPERATION_H
#define FPSETTAGSOPERATION_H

@class NSArray;


#import "FPTransformOperation.h"

@interface FPSetTagsOperation : FPTransformOperation {
    NSArray *_tagsLists;
}




-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 tagsLists:(id)arg1 ;
-(id)replicateForItems:(id)arg0 ;


@end


#endif