// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRMONITOR_H
#define SPRMONITOR_H

@class NSData;
@protocol SPRSubject;

#import <Foundation/Foundation.h>


@interface SPRMonitor : NSObject <SPRSubject>

 {
    ? footprint;
    ? provider;
    ? manager;
}


@property (nonatomic, readonly) NSData *footprint;


-(BOOL)signalWithEvent:(NSInteger)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)signalWithEvent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif