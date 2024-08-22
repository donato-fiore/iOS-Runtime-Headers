// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSAPPLICATIONVERSIONCONDITION_H
#define SSAPPLICATIONVERSIONCONDITION_H

@class NSString, NSNumber;


#import "SSProtocolCondition.h"

@interface SSApplicationVersionCondition : SSProtocolCondition {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}




-(BOOL)evaluateWithContext:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif