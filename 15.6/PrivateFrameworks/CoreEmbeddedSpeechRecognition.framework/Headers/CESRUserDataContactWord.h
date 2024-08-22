// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRUSERDATACONTACTWORD_H
#define CESRUSERDATACONTACTWORD_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CESRUserDataContactWord : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *components; // ivar: _components
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) int frequency; // ivar: _frequency


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponents:(id)arg0 frequency:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif