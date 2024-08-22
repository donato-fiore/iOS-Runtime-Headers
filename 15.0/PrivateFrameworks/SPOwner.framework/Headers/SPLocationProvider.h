// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPLOCATIONPROVIDER_H
#define SPLOCATIONPROVIDER_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"

@interface SPLocationProvider : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) SPHandle *provider; // ivar: _provider
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 provider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif