// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSTATECAPTUREASSISTANT_H
#define IMSTATECAPTUREASSISTANT_H


#import <Foundation/Foundation.h>


@interface IMStateCaptureAssistant : NSObject

@property (nonatomic) NSUInteger handle; // ivar: _handle


+(NSUInteger)registerStateCaptureBlockWithObject:(id)arg0 title:(id)arg1 queue:(id)arg2 ;
-(id)initWithObject:(id)arg0 title:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)deregister;


@end


#endif