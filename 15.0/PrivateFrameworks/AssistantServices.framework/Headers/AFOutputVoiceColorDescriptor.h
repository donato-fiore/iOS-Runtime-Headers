// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFOUTPUTVOICECOLORDESCRIPTOR_H
#define AFOUTPUTVOICECOLORDESCRIPTOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFOutputVoiceColorDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float alpha; // ivar: _alpha
@property (readonly, copy, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, copy, nonatomic) NSString *hexColor; // ivar: _hexColor
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice; // ivar: _localizedOutputVoice
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceColor; // ivar: _localizedOutputVoiceColor


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHexColor:(id)arg0 colorName:(id)arg1 alpha:(float)arg2 localizedOutputVoiceColor:(id)arg3 localizedOutputVoice:(id)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif