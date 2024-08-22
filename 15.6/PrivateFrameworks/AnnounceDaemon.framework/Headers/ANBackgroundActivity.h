// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANBACKGROUNDACTIVITY_H
#define ANBACKGROUNDACTIVITY_H

@class NSBackgroundActivityScheduler;
@protocol ANBackgroundActivityProtocol;

#import <Foundation/Foundation.h>


@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>



@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity; // ivar: _backgroundActivity


-(BOOL)shouldDefer;
-(id)init;
-(void)scheduleWithBlock:(id)arg0 ;


@end


#endif