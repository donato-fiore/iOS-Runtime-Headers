// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRNVRAMCONTROLLER_H
#define CRNVRAMCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CRNVRAMController : NSObject



+(BOOL)deleteNVRAMValueForKey:(id)arg0 error:(*id)arg1 ;
+(BOOL)setNVRAMValueForKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;


@end


#endif