// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAUTHENTICATIONFEEDBACK_H
#define SBAUTHENTICATIONFEEDBACK_H


#import <Foundation/Foundation.h>


@interface SBAuthenticationFeedback : NSObject {
    NSUInteger result;
}


@property (readonly, nonatomic) BOOL hintFailureText;
@property (readonly, nonatomic) BOOL jiggleLock; // ivar: _jiggleLock
@property (readonly, nonatomic) NSUInteger result; // ivar: _result
@property (readonly, nonatomic) BOOL showPasscode; // ivar: _showPasscode
@property (readonly, nonatomic) BOOL vibrate; // ivar: _vibrate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initForFailureShowingPasscode:(BOOL)arg0 ;
-(id)initForFailureWithFailureSettings:(id)arg0 ;
-(id)initForSuccess;


@end


#endif