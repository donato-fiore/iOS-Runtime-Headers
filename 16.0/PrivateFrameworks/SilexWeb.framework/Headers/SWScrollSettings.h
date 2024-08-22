// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSCROLLSETTINGS_H
#define SWSCROLLSETTINGS_H


#import <Foundation/Foundation.h>


@interface SWScrollSettings : NSObject

@property (readonly, nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (readonly, nonatomic) BOOL scrollsToTop; // ivar: _scrollsToTop
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator


-(id)initWithScrollEnabled:(BOOL)arg0 scrollsToTop:(BOOL)arg1 showsVerticalScrollIndicator:(BOOL)arg2 ;


@end


#endif