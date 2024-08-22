// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTCONTENTCACHEDKEY_H
#define TSTLAYOUTCONTENTCACHEDKEY_H

@class TSWPParagraphStyle, NSString;
@protocol NSCopying, TSWPStyleProviding;

#import <Foundation/Foundation.h>


@interface TSTLayoutContentCachedKey : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL cellWraps; // ivar: mCellWraps
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) int naturalAlignment; // ivar: mNaturalAlignment
@property (readonly, nonatomic) UIEdgeInsets paddingInsets; // ivar: mPaddingInsets
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: mParagraphStyle
@property (readonly, nonatomic) NSString *string; // ivar: mString
@property (readonly, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: mStyleProvidingSource
@property (readonly, nonatomic) unsigned char valueType; // ivar: mValueType
@property (readonly, nonatomic) int verticalAlignment; // ivar: mVerticalAlignment
@property (readonly, nonatomic) CGFloat width; // ivar: mWidth
@property (readonly, nonatomic) int writingDirection; // ivar: mWritingDirection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutContentCachedKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 paragraphStyle:(id)arg3 cellWraps:(BOOL)arg4 valueType:(unsigned char)arg5 paddingInsets:(struct UIEdgeInsets )arg6 verticalAlignment:(int)arg7 writingDirection:(int)arg8 naturalAlignment:(int)arg9 styleProvidingSource:(id)arg10 ;
-(void)dealloc;


@end


#endif