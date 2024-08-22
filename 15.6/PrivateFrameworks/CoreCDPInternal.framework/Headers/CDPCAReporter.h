// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPCAREPORTER_H
#define CDPCAREPORTER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CDPCAReporter : NSObject {
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    NSUInteger _initTime;
    mach_timebase_info _clock_timebase;
}




-(CGFloat)machAbsoluteTimeToTimeInterval:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithEvent:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)sendReport;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif