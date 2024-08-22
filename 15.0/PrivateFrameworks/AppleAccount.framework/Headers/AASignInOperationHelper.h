// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AASIGNINOPERATIONHELPER_H
#define AASIGNINOPERATIONHELPER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface AASignInOperationHelper : NSObject {
    ACAccountStore *_accountStore;
}




-(id)init;
-(void)_refreshEnabledDataclassesForAccount:(id)arg0 ;
-(void)_saveAccount:(id)arg0 completion:(id)arg1 ;
-(void)signInAccount:(id)arg0 enablingDataclasses:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif