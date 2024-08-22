// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDYNAMICOPTION_H
#define LNDYNAMICOPTION_H

@class LNImage, LNStaticDeferredLocalizedString, LNValue;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNDynamicOption : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNImage *image;
@property (readonly, nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 indentationLevel:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif