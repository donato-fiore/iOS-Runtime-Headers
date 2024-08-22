// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLISTPROCESSOR_H
#define PLISTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface PlistProcessor : NSObject



+(id)sharedPlistProcessor;
-(BOOL)verifyPlist:(id)arg0 forMountPoint:(id)arg1 withError:(*id)arg2 ;
-(id)copyAndFixPlist:(id)arg0 forMountPoint:(id)arg1 withError:(*id)arg2 ;
-(void)scanPlistsAtPath:(id)arg0 execBlock:(id)arg1 ;


@end


#endif