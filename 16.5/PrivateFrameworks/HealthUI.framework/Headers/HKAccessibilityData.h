// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACCESSIBILITYDATA_H
#define HKACCESSIBILITYDATA_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKAccessibilityData : NSObject

@property (readonly, nonatomic) NSArray *accessibilityPointData; // ivar: _accessibilityPointData
@property (readonly, nonatomic) NSDictionary *accessibilitySpans; // ivar: _accessibilitySpans


-(id)description;
-(id)initWithPointData:(id)arg0 accessibilitySpans:(id)arg1 ;


@end


#endif