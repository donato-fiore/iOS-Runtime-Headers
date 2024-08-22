// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKDEVICEDISPLAY_H
#define CRKDEVICEDISPLAY_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKDeviceDisplay : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSUInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithScaleFactor:(CGFloat)arg0 frame:(struct CGRect )arg1 orientation:(NSUInteger)arg2 ;
-(id)initWithScaleFactor:(CGFloat)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 orientation:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif