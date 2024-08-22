// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPERSITEPREFERENCETIMEOUT_H
#define WBSPERSITEPREFERENCETIMEOUT_H


#import <Foundation/Foundation.h>


@interface WBSPerSitePreferenceTimeout : NSObject

@property (readonly, nonatomic) id *fallbackValue; // ivar: _fallbackValue
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval


+(id)timeoutWithInterval:(CGFloat)arg0 fallbackValue:(id)arg1 ;
-(id)initWithInterval:(CGFloat)arg0 fallbackValue:(id)arg1 ;


@end


#endif