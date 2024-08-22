// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKDATAPROTECTIONOBSERVER_H
#define EKDATAPROTECTIONOBSERVER_H

@class CDBDataProtectionObserver;

#import <Foundation/Foundation.h>


@interface EKDataProtectionObserver : NSObject

@property (readonly, nonatomic) BOOL dataIsAccessible;
@property (retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // ivar: _dataProtectionObserver
@property (copy, nonatomic) id *stateChangedCallback; // ivar: _stateChangedCallback


+(id)stateChangedNotificationName;
-(id)init;
-(void)_dataProtectionStateChanged;


@end


#endif