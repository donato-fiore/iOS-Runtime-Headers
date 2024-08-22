// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSODIADDITIONALATTRIBUTES_H
#define AMSODIADDITIONALATTRIBUTES_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSODIAdditionalAttributes : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif