// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEOPLECLIENT_H
#define PEOPLECLIENT_H


#import <Foundation/Foundation.h>


@interface PeopleClient : NSObject



-(?)canSendFamilyIMessageWithCompletion;
-(?)canSendFamilyScreenTimeRequestIMessageWithCompletion;
-(?)sendFamilyAskToBuyIMessageWithRequestIDcompletion;
-(id)init;


@end


#endif