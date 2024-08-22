// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIREVISIONHISTORYTOKEN_H
#define TIREVISIONHISTORYTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIRevisionHistoryToken : NSObject

@property (nonatomic, getter=isAccepted) BOOL accepted; // ivar: _accepted
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (copy, nonatomic) NSString *tokenDictionaryString; // ivar: _tokenDictionaryString
@property (nonatomic) TITokenID tokenID; // ivar: _tokenID
@property (copy, nonatomic) NSString *tokenInputString; // ivar: _tokenInputString
@property (nonatomic) unsigned int usageLearningMask; // ivar: _usageLearningMask
@property (nonatomic) unsigned int usageTrackingMask; // ivar: _usageTrackingMask
@property (copy, nonatomic) NSString *userTyping; // ivar: _userTyping


-(id)description;


@end


#endif