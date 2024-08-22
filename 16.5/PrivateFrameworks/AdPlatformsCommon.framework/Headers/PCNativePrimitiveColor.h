// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCNATIVEPRIMITIVECOLOR_H
#define PCNATIVEPRIMITIVECOLOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCNativePrimitiveColor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned char alpha;
@property (readonly, nonatomic) unsigned char blue;
@property (readonly, nonatomic) unsigned char green;
@property (readonly, nonatomic) NSInteger rawValue; // ivar: _rawValue
@property (readonly, nonatomic) unsigned char red;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRGBA:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif