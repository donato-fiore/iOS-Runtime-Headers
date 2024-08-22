// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEINPUTGROUP_H
#define IEINPUTGROUP_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IEInputGroup : NSObject

@property (nonatomic) BOOL canUseServerTTS; // ivar: _canUseServerTTS
@property (retain, nonatomic) NSString *dialogPhase; // ivar: _dialogPhase
@property (retain, nonatomic) NSString *inputGroupId; // ivar: _inputGroupId
@property (nonatomic) BOOL listenAfterSpeaking; // ivar: _listenAfterSpeaking
@property (retain, nonatomic) NSDictionary *nlParameters; // ivar: _nlParameters


-(id)initWithId:(id)arg0 ;


@end


#endif