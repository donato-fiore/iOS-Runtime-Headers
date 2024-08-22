// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NACPROXYVOLUMECONTROLTARGET_H
#define NACPROXYVOLUMECONTROLTARGET_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NACProxyVolumeControlTarget : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSNumber *originIdentifier; // ivar: _originIdentifier
@property (readonly, nonatomic, getter=isPairedDevice) BOOL pairedDevice;


+(BOOL)_isValidOriginIdentifier:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)volumeControlTargetWithCategory:(id)arg0 ;
+(id)volumeControlTargetWithOriginIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginIdentifier:(id)arg0 category:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif