// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDUSERDEFAULTS_H
#define WDUSERDEFAULTS_H

@class HKKeyValueDomain;

#import <Foundation/Foundation.h>


@interface WDUserDefaults : NSObject

@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain


-(id)initWithHealthStore:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)valueForKey:(id)arg0 callback:(id)arg1 ;


@end


#endif