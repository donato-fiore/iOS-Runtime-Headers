// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCUSTOMCATALOGCONFIGURATION_H
#define SHCUSTOMCATALOGCONFIGURATION_H



#import "SHCatalogConfiguration.h"

@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (nonatomic) NSInteger density; // ivar: _density


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif