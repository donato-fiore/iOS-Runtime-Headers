// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWATCHFACE_H
#define ATXWATCHFACE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXWatchFace : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *complications; // ivar: _complications
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXWatchFace:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 complications:(id)arg1 selected:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif