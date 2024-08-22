// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPRADIOSTATION_H
#define MPRADIOSTATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (nonatomic) NSInteger uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelStation:(id)arg0 ;
-(id)initWithPlayParameters:(id)arg0 ;
-(id)initWithStation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif