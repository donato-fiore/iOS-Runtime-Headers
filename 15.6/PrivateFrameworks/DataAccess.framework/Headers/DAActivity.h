// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAACTIVITY_H
#define DAACTIVITY_H


#import <Foundation/Foundation.h>

#import "DAAccount.h"

@interface DAActivity : NSObject {
    DAAccount *_account;
}




-(id)initWithAccount:(id)arg0 ;
-(void)dealloc;


@end


#endif