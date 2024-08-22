// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPINOPERATION_H
#define FPPINOPERATION_H

@class NSArray;


#import "FPActionOperation.h"

@interface FPPinOperation : FPActionOperation {
    NSArray *_items;
}




-(id)initWithItems:(id)arg0 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif