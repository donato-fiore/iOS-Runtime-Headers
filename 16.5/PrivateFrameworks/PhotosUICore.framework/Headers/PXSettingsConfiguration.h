// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGSCONFIGURATION_H
#define PXSETTINGSCONFIGURATION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PXSettings.h"

@interface PXSettingsConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *archive; // ivar: _archive
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) PXSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
+(id)configurationsFromSharableString:(id)arg0 ;
+(id)sharableStringForConfigurations:(id)arg0 ;
-(id)copyWithName:(id)arg0 ;
-(id)copyWithUpdatedSettingsValues;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 settings:(id)arg1 ;
-(id)initWithName:(id)arg0 settings:(id)arg1 archive:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif