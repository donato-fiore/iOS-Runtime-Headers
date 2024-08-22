// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBBROWSERSTATE_H
#define WBBROWSERSTATE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBrowserState : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *pinnedTabs; // ivar: _pinnedTabs
@property (copy, nonatomic) NSArray *privatePinnedTabs; // ivar: _privatePinnedTabs
@property (copy, nonatomic) NSArray *windowStates; // ivar: _windowStates
@property (copy, nonatomic) NSArray *windows; // ivar: _windows


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPinnedTabs:(id)arg0 privatePinnedTabs:(id)arg1 windowStates:(id)arg2 ;
-(id)initWithPinnedTabs:(id)arg0 privatePinnedTabs:(id)arg1 windows:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif