// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEDESTINATIONFORMATTER_H
#define HMDREMOTEDESTINATIONFORMATTER_H

@class NSFormatter;



@interface HMDRemoteDestinationFormatter : NSFormatter



+(id)defaultFormatter;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif