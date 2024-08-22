// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAQUOTADEPLETIONALERT_H
#define AAQUOTADEPLETIONALERT_H

@class NSString, ACAccountStore, ACAccount;

#import <Foundation/Foundation.h>


@interface AAQuotaDepletionAlert : NSObject {
    NSString *_dataclass;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
}




+(BOOL)_isDisabledDataclass:(id)arg0 ;
-(BOOL)showIfNecessaryWithHandler:(id)arg0 ;
-(id)_deviceSpecificLocalizedString:(id)arg0 ;
-(id)_primaryAccount;
-(id)init;
-(id)initForDataclass:(id)arg0 ;
-(void)showWithHandler:(id)arg0 ;


@end


#endif