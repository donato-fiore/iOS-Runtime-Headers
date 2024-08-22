// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSTYLEWARMINGOPERATION_H
#define TSDSTYLEWARMINGOPERATION_H

@class NSOperation;


#import "TSSStyle.h"
#import "TSKAccessController.h"

@interface TSDStyleWarmingOperation : NSOperation {
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}




-(id)initWithStyle:(id)arg0 property:(int)arg1 accessController:(id)arg2 ;
-(void)main;
-(void)warm;


@end


#endif