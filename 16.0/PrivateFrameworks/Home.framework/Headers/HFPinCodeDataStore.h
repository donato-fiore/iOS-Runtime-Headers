// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPINCODEDATASTORE_H
#define HFPINCODEDATASTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HFPinCode.h"

@interface HFPinCodeDataStore : NSObject

@property (retain, nonatomic) HFPinCode *currentUserPinCode; // ivar: _currentUserPinCode
@property (retain, nonatomic) NSMutableDictionary *guestPINCodes; // ivar: _guestPINCodes
@property (retain, nonatomic) NSMutableDictionary *removedUserPINCodes; // ivar: _removedUserPINCodes
@property (retain, nonatomic) NSMutableDictionary *userPINCodes; // ivar: _userPINCodes


-(id)guestPinCodeFromItem:(id)arg0 ;
-(id)init;
-(id)pinCodeForCodeValue:(id)arg0 ;
-(id)pinCodeFromItem:(id)arg0 ;
-(void)mergeData:(id)arg0 ;
-(void)updateWithPinCode:(id)arg0 forOldCodeValue:(id)arg1 ;


@end


#endif