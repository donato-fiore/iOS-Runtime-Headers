// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENULISTPAGE_H
#define _UIEDITMENULISTPAGE_H


#import <Foundation/Foundation.h>


@interface _UIEditMenuListPage : NSObject

@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) CGFloat width; // ivar: _width


-(id)description;
-(id)initWithStartIndex:(NSInteger)arg0 ;
-(void)appendItemWithWidth:(CGFloat)arg0 ;
-(void)enforceMinimumWidth:(CGFloat)arg0 ;
-(void)prependItemWithWidth:(CGFloat)arg0 ;
-(void)removeLastItemWithWidth:(CGFloat)arg0 ;


@end


#endif