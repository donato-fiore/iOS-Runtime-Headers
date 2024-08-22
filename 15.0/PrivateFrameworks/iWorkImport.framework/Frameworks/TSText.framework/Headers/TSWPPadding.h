// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPPADDING_H
#define TSWPPADDING_H

@class NSString;
@protocol TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing;

#import <Foundation/Foundation.h>


@interface TSWPPadding : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing>



@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (nonatomic) CGFloat rightInset; // ivar: _rightInset
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset; // ivar: _topInset


+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
+(id)padding;
+(id)paddingWithTopInset:(CGFloat)arg0 leftInset:(CGFloat)arg1 bottomInset:(CGFloat)arg2 rightInset:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTopInset:(CGFloat)arg0 leftInset:(CGFloat)arg1 bottomInset:(CGFloat)arg2 rightInset:(CGFloat)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)paddingByMirroringHorizontal;
-(struct UIEdgeInsets )edgeInsets;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;
-(void)transform:(struct CGAffineTransform )arg0 ;


@end


#endif