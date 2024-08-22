// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMUSERMUTABLEPERSONA_H
#define UMUSERMUTABLEPERSONA_H

@class NSString;


#import "UMUserPersona.h"

@interface UMUserMutablePersona : UMUserPersona

@property (nonatomic) unsigned int gid;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (nonatomic) BOOL isDefaultPersona;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isEnterprisePersona;
@property (nonatomic) BOOL isGuestPersona;
@property (nonatomic) BOOL isPersonalPersona;
@property (nonatomic) BOOL isSystemPersona;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSString *userPersonaNickName;
@property (nonatomic) NSUInteger userPersonaType;
@property (copy, nonatomic) NSString *userPersonaUniqueString;


-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(*id)arg0 ;


@end


#endif