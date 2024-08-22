// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKDEFAULTS_H
#define BKDEFAULTS_H


#import <Foundation/Foundation.h>


@interface BKDefaults : NSObject



+(BOOL)setNumber:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
+(BOOL)setString:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
+(id)device;
+(id)numberForKey:(id)arg0 withError:(*id)arg1 ;
+(id)stringForKey:(id)arg0 withError:(*id)arg1 ;


@end


#endif