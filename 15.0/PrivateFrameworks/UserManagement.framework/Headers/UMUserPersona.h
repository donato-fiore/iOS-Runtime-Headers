// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UMUSERPERSONA_H
#define UMUSERPERSONA_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying>

 {
    NSString *personaName;
    BOOL shouldFetchAttributes;
}


@property (nonatomic) unsigned int gid; // ivar: _gid
@property (nonatomic) BOOL isDataSeparatedPersona; // ivar: _isDataSeparatedPersona
@property (nonatomic) BOOL isDefaultPersona; // ivar: _isDefaultPersona
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) BOOL isEnterprisePersona; // ivar: _isEnterprisePersona
@property (nonatomic) BOOL isGuestPersona; // ivar: _isGuestPersona
@property (nonatomic) BOOL isPersonalPersona; // ivar: _isPersonalPersona
@property (nonatomic) BOOL isSystemPersona; // ivar: _isSystemPersona
@property (nonatomic) unsigned int uid; // ivar: _uid
@property (copy, nonatomic) NSString *userPersonaNickName; // ivar: _userPersonaNickName
@property (nonatomic) NSUInteger userPersonaType; // ivar: _userPersonaType
@property (copy, nonatomic) NSString *userPersonaUniqueString; // ivar: _userPersonaUniqueString


+(BOOL)currentPersonaMatchesPath:(id)arg0 ;
+(id)currentPersona;
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(*id)arg0 ;
-(BOOL)isEqualToPersona:(id)arg0 ;
-(id)copyCurrentPersonaContextWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg0 ;
-(id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg0 ;
-(id)generateAndRestorePersonaContextWithIdentityString:(id)arg0 ;
-(id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)restorePersonaWithSavedPersonaContext:(id)arg0 ;
-(void)fetchAttributesIfNeeded;
-(void)setPropertiesFromUserPersona:(id)arg0 ;


@end


#endif