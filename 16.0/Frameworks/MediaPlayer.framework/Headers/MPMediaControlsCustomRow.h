// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIACONTROLSCUSTOMROW_H
#define MPMEDIACONTROLSCUSTOMROW_H

@class NSString, UTType;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPMediaControlsCustomRow : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *titleOverride; // ivar: _titleOverride
@property (copy, nonatomic) UTType *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)rowWithType:(id)arg0 titleOverride:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif