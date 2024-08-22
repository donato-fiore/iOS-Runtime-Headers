// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPROGRESSUPDATER_H
#define FPPROGRESSUPDATER_H

@class NSString;
@protocol FPProgressProtocol;

#import <Foundation/Foundation.h>

#import "FPProgressProxy.h"

@interface FPProgressUpdater : NSObject <FPProgressProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) FPProgressProxy *progress; // ivar: _progress
@property (readonly) Class superclass;


-(void)reportProgressUpdate:(NSInteger)arg0 totalUnitCount:(NSInteger)arg1 completedFileCount:(NSInteger)arg2 totalFileCount:(NSInteger)arg3 ;


@end


#endif