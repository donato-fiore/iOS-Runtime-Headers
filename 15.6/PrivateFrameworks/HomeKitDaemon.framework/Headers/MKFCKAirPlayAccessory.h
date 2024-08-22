// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKAIRPLAYACCESSORY_H
#define MKFCKAIRPLAYACCESSORY_H

@class NSString;


#import "MKFCKMediaAccessory.h"

@interface MKFCKAirPlayAccessory : MKFCKMediaAccessory

@property (nonatomic) short minimumUserPrivilege;
@property (copy, nonatomic) NSString *password;


+(id)fetchRequest;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)validateMinimumUserPrivilege:(*id)arg0 error:(*id)arg1 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;


@end


#endif