// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPTRANSFORMOPERATION_H
#define FPTRANSFORMOPERATION_H

@class NSArray;


#import "FPActionOperation.h"

@interface FPTransformOperation : FPActionOperation

@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) id *transformCompletionBlock; // ivar: _transformCompletionBlock


-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)finalItemsForStitcherForResult:(id)arg0 ;
-(id)fp_prettyDescription;
-(id)initWithItemsOfDifferentProviders:(id)arg0 action:(id)arg1 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)postStitchingFinishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif