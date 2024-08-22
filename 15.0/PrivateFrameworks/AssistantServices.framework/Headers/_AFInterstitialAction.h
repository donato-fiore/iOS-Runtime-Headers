// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFINTERSTITIALACTION_H
#define _AFINTERSTITIALACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _AFInterstitialAction : NSObject

@property (readonly, copy, nonatomic) NSString *displayKey; // ivar: _displayKey
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSInteger phase; // ivar: _phase
@property (readonly, copy, nonatomic) NSString *speakableKey; // ivar: _speakableKey


-(id)initWithDuration:(CGFloat)arg0 ;
-(id)initWithPhase:(NSInteger)arg0 displayKey:(id)arg1 speakableKey:(id)arg2 ;


@end


#endif