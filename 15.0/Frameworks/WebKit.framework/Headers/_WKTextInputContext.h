// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKTEXTINPUTCONTEXT_H
#define _WKTEXTINPUTCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _WKTextInputContext : NSObject <NSCopying>

 {
    ElementContext _textInputContext;
}


@property (readonly, nonatomic) CGRect boundingRect;


-(*void)_textInputContext;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTextInputContext:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif