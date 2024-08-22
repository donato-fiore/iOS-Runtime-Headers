// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBBRIGHTESTALSFILTER_H
#define CBBRIGHTESTALSFILTER_H

@class NSMutableDictionary;


#import "CBFilter.h"

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}




-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)filterEvent:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)forgetDataForService:(struct __IOHIDServiceClient *)arg0 ;


@end


#endif