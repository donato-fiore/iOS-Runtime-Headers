// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCINTERESTTOKEN_H
#define FCINTERESTTOKEN_H


#import <Foundation/Foundation.h>


@interface FCInterestToken : NSObject

@property (copy, nonatomic) id *removeInterestBlock; // ivar: _removeInterestBlock


+(id)interestTokenWithCallbackQueue:(id)arg0 removeInterestBlock:(id)arg1 ;
+(id)interestTokenWithRemoveInterestBlock:(id)arg0 ;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 removeInterestBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif