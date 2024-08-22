// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSCRITERIA_H
#define PPCONNECTIONSCRITERIA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPConnectionsCriteria : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) unsigned char locationField; // ivar: _locationField


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationField:(unsigned char)arg0 bundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif