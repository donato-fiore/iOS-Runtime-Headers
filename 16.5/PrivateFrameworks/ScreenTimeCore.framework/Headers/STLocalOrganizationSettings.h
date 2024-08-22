// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STLOCALORGANIZATIONSETTINGS_H
#define STLOCALORGANIZATIONSETTINGS_H

@class NSString;


#import "STCoreOrganizationSettings.h"
#import "STLocalOrganization.h"

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;


-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif