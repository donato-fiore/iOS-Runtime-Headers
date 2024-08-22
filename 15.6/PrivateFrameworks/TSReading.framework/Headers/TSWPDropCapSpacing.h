// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDROPCAPSPACING_H
#define TSWPDROPCAPSPACING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPDropCapSpacing : NSObject <NSCopying>



@property (nonatomic) BOOL allowSpanParagraphs; // ivar: _allowSpanParagraphs
@property (nonatomic) NSUInteger elevatedLineCount; // ivar: _elevatedLineCount
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) NSUInteger followingLineCount; // ivar: _followingLineCount
@property (nonatomic) NSUInteger lineCount; // ivar: _lineCount
@property (nonatomic) CGFloat maxWidthFactor; // ivar: _maxWidthFactor
@property (nonatomic) CGFloat padding; // ivar: _padding


+(id)dropCapSpacingWithLineCount:(NSUInteger)arg0 elevatedLineCount:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)computedFlagsWithPropertyMap:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif