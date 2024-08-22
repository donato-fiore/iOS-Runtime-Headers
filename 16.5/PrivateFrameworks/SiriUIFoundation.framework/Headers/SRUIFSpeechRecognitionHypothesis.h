// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFSPEECHRECOGNITIONHYPOTHESIS_H
#define SRUIFSPEECHRECOGNITIONHYPOTHESIS_H

@class AceObject, AFUserUtterance;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SRUIFSpeechRecognitionHypothesis : NSObject <NSCopying>



@property (readonly, nonatomic) AceObject *backingAceObject; // ivar: _backingAceObject
@property (readonly, nonatomic, getter=isFinal) BOOL final; // ivar: _final
@property (readonly, nonatomic) AFUserUtterance *userUtterance; // ivar: _userUtterance


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserUtterance:(id)arg0 backingAceObject:(id)arg1 isFinal:(BOOL)arg2 ;


@end


#endif