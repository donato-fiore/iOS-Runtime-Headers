// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TIPREFERENCESANALYZERPROPERTY_H
#define _TIPREFERENCESANALYZERPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TIPreferencesAnalyzerProperty : NSObject

@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int reportingMode; // ivar: _reportingMode


-(id)initWithKey:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 reportingMode:(int)arg3 ;


@end


#endif