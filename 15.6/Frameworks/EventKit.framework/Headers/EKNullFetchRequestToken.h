// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKNULLFETCHREQUESTTOKEN_H
#define EKNULLFETCHREQUESTTOKEN_H

@protocol EKFetchRequestToken;

#import <Foundation/Foundation.h>


@interface EKNullFetchRequestToken : NSObject <EKFetchRequestToken>





+(id)sharedToken;
-(void)cancel;


@end


#endif