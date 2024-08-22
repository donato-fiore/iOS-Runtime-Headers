// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPUNTRASHOPERATION_H
#define FPUNTRASHOPERATION_H



#import "FPTransformOperation.h"
#import "FPItem.h"

@interface FPUntrashOperation : FPTransformOperation {
    FPItem *_restoreDirectory;
}


@property (copy, nonatomic) id *untrashCompletionBlock; // ivar: _untrashCompletionBlock


-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 restoreDirectory:(id)arg1 ;
-(id)replicateForItems:(id)arg0 ;
-(void)postStitchingFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif