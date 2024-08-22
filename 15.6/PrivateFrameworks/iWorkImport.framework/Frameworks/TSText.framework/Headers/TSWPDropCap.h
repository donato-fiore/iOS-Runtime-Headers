// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDROPCAP_H
#define TSWPDROPCAP_H

@class TSKSosBase;
@protocol NSCopying, NSMutableCopying;



@interface TSWPDropCap : TSKSosBase <NSCopying, NSMutableCopying>



@property (nonatomic) CGFloat characterScale; // ivar: _characterScale
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger dropCapType; // ivar: _dropCapType
@property (nonatomic) NSUInteger numberOfCharacters; // ivar: _numberOfCharacters
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) NSUInteger numberOfRaisedLines; // ivar: _numberOfRaisedLines
@property (nonatomic) CGFloat outdent; // ivar: _outdent
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (nonatomic) BOOL shapeEnabled; // ivar: _shapeEnabled
@property (nonatomic) NSInteger wrapType; // ivar: _wrapType


+(Class)mutableClass;
+(id)dropCap;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithLocalizationDictionary:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 numberOfLines:(NSUInteger)arg1 numberOfRaisedLines:(NSUInteger)arg2 ;
-(id)initWithType:(NSInteger)arg0 numberOfLines:(NSUInteger)arg1 numberOfRaisedLines:(NSUInteger)arg2 outdent:(CGFloat)arg3 padding:(CGFloat)arg4 shapeEnabled:(BOOL)arg5 cornerRadius:(CGFloat)arg6 characterScale:(CGFloat)arg7 wrapType:(NSInteger)arg8 numberOfCharacters:(NSUInteger)arg9 ;
-(id)localizationDictionary;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setValuesWithLocalizationDictionary:(id)arg0 ;


@end


#endif