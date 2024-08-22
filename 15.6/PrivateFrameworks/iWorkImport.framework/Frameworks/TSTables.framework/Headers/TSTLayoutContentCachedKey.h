// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTLAYOUTCONTENTCACHEDKEY_H
#define TSTLAYOUTCONTENTCACHEDKEY_H

@class TSWPParagraphStyle, NSString;
@protocol NSCopying, TSWPStyleProviding;

#import <Foundation/Foundation.h>


@interface TSTLayoutContentCachedKey : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL cellWraps; // ivar: _cellWraps
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) NSInteger naturalAlignment; // ivar: _naturalAlignment
@property (readonly, nonatomic) UIEdgeInsets paddingInsets; // ivar: _paddingInsets
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource
@property (readonly, nonatomic) unsigned char valueType; // ivar: _valueType
@property (readonly, nonatomic) int verticalAlignment; // ivar: _verticalAlignment
@property (readonly, nonatomic) CGFloat width; // ivar: _width
@property (readonly, nonatomic) int writingDirection; // ivar: _writingDirection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutContentCachedKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 paragraphStyle:(id)arg3 cellWraps:(BOOL)arg4 valueType:(unsigned char)arg5 paddingInsets:(struct UIEdgeInsets )arg6 verticalAlignment:(int)arg7 writingDirection:(int)arg8 naturalAlignment:(NSInteger)arg9 styleProvidingSource:(id)arg10 ;


@end


#endif