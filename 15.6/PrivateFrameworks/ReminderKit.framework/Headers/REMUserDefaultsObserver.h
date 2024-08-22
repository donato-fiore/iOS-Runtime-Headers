// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMUSERDEFAULTSOBSERVER_H
#define REMUSERDEFAULTSOBSERVER_H

@class NSString;
@protocol REMUserDefaultsObserveToken;

#import <Foundation/Foundation.h>

#import "REMUserDefaults.h"

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL removed; // ivar: _removed
@property (readonly) Class superclass;
@property (retain, nonatomic) REMUserDefaults *userDefaults; // ivar: _userDefaults
@property (copy, nonatomic) NSString *userDefaultsKey; // ivar: _userDefaultsKey


-(id)initWithUserDefaults:(id)arg0 key:(id)arg1 block:(id)arg2 ;
-(void)dealloc;
-(void)stopObserving;


@end


#endif