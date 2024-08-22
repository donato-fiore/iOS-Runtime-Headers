// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDTABBARITEMACCESSORYBUTTONARRANGEMENT_H
#define SFUNIFIEDTABBARITEMACCESSORYBUTTONARRANGEMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *leadingButtonTypes; // ivar: _leadingButtonTypes
@property (readonly, copy, nonatomic) NSArray *trailingButtonTypes; // ivar: _trailingButtonTypes


-(BOOL)containsButtonType:(NSInteger)arg0 ;
-(BOOL)isEqualToArrangement:(id)arg0 ;
-(id)init;
-(id)initUsingButtonLayout:(NSInteger)arg0 filteringButtonsUsingBlock:(id)arg1 ;
-(id)initWithLeadingButtonTypes:(id)arg0 trailingButtonTypes:(id)arg1 ;


@end


#endif