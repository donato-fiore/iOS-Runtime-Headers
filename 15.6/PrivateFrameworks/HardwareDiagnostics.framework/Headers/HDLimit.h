// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDLIMIT_H
#define HDLIMIT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDBound.h"

@interface HDLimit : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) HDBound *lowerBound; // ivar: _lowerBound
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) HDBound *upperBound; // ivar: _upperBound


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLimit:(id)arg0 ;
-(BOOL)measurementWithinBounds:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif