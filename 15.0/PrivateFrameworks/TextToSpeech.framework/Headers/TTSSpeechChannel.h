// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSPEECHCHANNEL_H
#define TTSSPEECHCHANNEL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TTSSpeechVoice.h"

@interface TTSSpeechChannel : NSObject <NSSecureCoding>



@property (retain, nonatomic) TTSSpeechVoice *voice; // ivar: _voice


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVoice:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif