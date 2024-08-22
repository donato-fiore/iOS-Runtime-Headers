// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMOPTIONSUTILITIES_H
#define MDMOPTIONSUTILITIES_H


#import <Foundation/Foundation.h>


@interface MDMOptionsUtilities : NSObject



+(id)defaultMDMOptions;
+(id)validatedMDMOptionsFromOptionsDictionary:(id)arg0 ;
+(void)setDefaultMDMOptions:(id)arg0 ;


@end


#endif