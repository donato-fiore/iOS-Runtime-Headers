// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACMANAGEDDEFAULTS_H
#define ACMANAGEDDEFAULTS_H


#import <Foundation/Foundation.h>


@interface ACManagedDefaults : NSObject



+(id)sharedInstance;
-(id)_readManagedDefaults;
-(id)valueForManagedDefault:(id)arg0 ;
-(void)_writeManagedDefaults:(id)arg0 ;
-(void)setValue:(id)arg0 forManagedDefault:(id)arg1 ;


@end


#endif