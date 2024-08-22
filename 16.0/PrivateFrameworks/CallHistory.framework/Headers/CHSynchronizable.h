// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSYNCHRONIZABLE_H
#define CHSYNCHRONIZABLE_H

@class NSString;
@protocol CHSynchronizable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHSynchronizable : NSObject <CHSynchronizable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)executeSyncWithBOOL:(id)arg0 ;
-(id)executeSyncWithResult:(id)arg0 ;
-(id)initWithName:(char *)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)execute:(id)arg0 ;
-(void)executeSync:(id)arg0 ;


@end


#endif