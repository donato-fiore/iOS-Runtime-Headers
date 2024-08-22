// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPCOORDINATIONCONTEXT_H
#define FPCOORDINATIONCONTEXT_H

@class NSProgress;

#import <Foundation/Foundation.h>


@interface FPCoordinationContext : NSObject

@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


-(id)initWithProgress:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif