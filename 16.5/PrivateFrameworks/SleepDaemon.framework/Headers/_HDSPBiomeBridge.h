// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSPBIOMEBRIDGE_H
#define _HDSPBIOMEBRIDGE_H

@class NSString, BMBiomeScheduler;
@protocol HDSPBiomeInterface;

#import <Foundation/Foundation.h>


@interface _HDSPBiomeBridge : NSObject <HDSPBiomeInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMBiomeScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)init;
-(id)subscribe:(id)arg0 callback:(id)arg1 ;
-(void)sendEvent:(id)arg0 toStream:(id)arg1 ;


@end


#endif