// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPERFMETRICFAMILY_H
#define _CDPERFMETRICFAMILY_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CDPerfMetricFamily : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSMutableDictionary *perfMetrics; // ivar: _perfMetrics


+(id)perfMetricFamilyWithName:(id)arg0 ;
-(id)allPerfMetrics;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)perfMetricWithName:(id)arg0 ;
-(id)perfMetricWithName:(id)arg0 string:(id)arg1 ;


@end


#endif