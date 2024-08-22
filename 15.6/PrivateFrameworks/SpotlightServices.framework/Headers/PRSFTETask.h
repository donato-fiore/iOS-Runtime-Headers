// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSFTETASK_H
#define PRSFTETASK_H

@protocol PRSTriggerTask;

#import <Foundation/Foundation.h>


@interface PRSFTETask : NSObject <PRSTriggerTask>



@property (copy) id *reply; // ivar: _reply


-(BOOL)allowLocation;
-(BOOL)needsBag;
-(id)initWithReply:(id)arg0 ;
-(void)triggerQuery:(BOOL)arg0 ;


@end


#endif