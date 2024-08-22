// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMFITNESSMACHINE_H
#define CMFITNESSMACHINE_H


#import <Foundation/Foundation.h>

#import "CMFitnessMachineInternal.h"

@interface CMFitnessMachine : NSObject

@property (readonly, nonatomic) CMFitnessMachineInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(void)feedFitnessMachineData:(id)arg0 ;


@end


#endif