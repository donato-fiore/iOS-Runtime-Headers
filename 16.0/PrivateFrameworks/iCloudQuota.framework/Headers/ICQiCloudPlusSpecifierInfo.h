// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQICLOUDPLUSSPECIFIERINFO_H
#define ICQICLOUDPLUSSPECIFIERINFO_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "ICQSpecifierInfo.h"

@interface ICQiCloudPlusSpecifierInfo : ICQSpecifierInfo <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *featureList; // ivar: _featureList


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif