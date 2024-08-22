// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISIMAGESTYLEDESCRIPTOR_H
#define ISIMAGESTYLEDESCRIPTOR_H

@class NSUUID, IFColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ISImageStyleDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSUUID *digest;
@property (nonatomic) BOOL selectedVariant; // ivar: _selectedVariant
@property (nonatomic) BOOL templateVariant; // ivar: _templateVariant
@property (retain, nonatomic) IFColor *tintColor; // ivar: _tintColor


+(BOOL)supportsSecureCoding;
+(id)defaultStyleDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif