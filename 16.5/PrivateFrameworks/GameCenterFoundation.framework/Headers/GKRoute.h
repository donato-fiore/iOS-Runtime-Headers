// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKROUTE_H
#define GKROUTE_H

@class NSRegularExpression, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface GKRoute : NSObject {
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}




-(BOOL)matchesURL:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 parameters:(*id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 scheme:(id)arg1 ;
-(id)nonParameterCharacterSet;


@end


#endif