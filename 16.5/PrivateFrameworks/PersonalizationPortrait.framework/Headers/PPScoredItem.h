// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSCOREDITEM_H
#define PPSCOREDITEM_H

@protocol NSCopying, NSSecureCoding, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPScoredItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *item; // ivar: _item
@property (readonly, nonatomic) unsigned short resultCount; // ivar: _resultCount
@property (readonly, nonatomic) unsigned short resultPosition; // ivar: _resultPosition
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 score:(CGFloat)arg1 ;
-(id)initWithItem:(id)arg0 score:(CGFloat)arg1 resultPosition:(unsigned short)arg2 resultCount:(unsigned short)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif