// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPTRASHOPERATION_H
#define FPTRASHOPERATION_H



#import "FPTransformOperation.h"

@interface FPTrashOperation : FPTransformOperation



-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 ;
-(id)replicateForItems:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;
-(void)subclassPreflightWithCompletion:(id)arg0 ;


@end


#endif