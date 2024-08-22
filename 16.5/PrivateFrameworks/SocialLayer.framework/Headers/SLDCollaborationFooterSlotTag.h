// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONFOOTERSLOTTAG_H
#define SLDCOLLABORATIONFOOTERSLOTTAG_H

@class NSString;
@protocol NSCopying;


#import "SLDSlotTag.h"

@interface SLDCollaborationFooterSlotTag : SLDSlotTag <NSCopying>



@property (readonly, nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)tagForTitle:(id)arg0 subtitle:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 maxWidth:(CGFloat)arg2 ;


@end


#endif