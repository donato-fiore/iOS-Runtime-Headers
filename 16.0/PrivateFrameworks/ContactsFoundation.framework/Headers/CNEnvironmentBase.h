// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNENVIRONMENTBASE_H
#define CNENVIRONMENTBASE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}




+(char *)environmentStackKey;
+(id)currentEnvironment;
+(id)currentEnvironmentForKey:(*void)arg0 ;
+(id)defaultEnvironment;
+(id)defaultStack;
+(id)effectiveReadingStackForKey:(*void)arg0 ;
+(id)effectiveWritingStackForKey:(*void)arg0 ;
-(void)becomeCurrent;
-(void)resignCurrent;


@end


#endif