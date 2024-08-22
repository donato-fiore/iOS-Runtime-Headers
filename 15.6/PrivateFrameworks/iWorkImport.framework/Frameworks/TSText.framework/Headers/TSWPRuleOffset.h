// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPRULEOFFSET_H
#define TSWPRULEOFFSET_H

@protocol TSSPropertyValueArchiving, NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPRuleOffset : NSObject <TSSPropertyValueArchiving, NSCopying>



@property (readonly, nonatomic) CGFloat dX; // ivar: _dX
@property (readonly, nonatomic) CGFloat dY; // ivar: _dY


+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
+(id)ruleOffset;
+(id)ruleOffsetWithDX:(CGFloat)arg0 dY:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithDX:(CGFloat)arg0 dY:(CGFloat)arg1 ;
-(struct CGPoint )pointValue;
-(struct CGSize )sizeValue;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif