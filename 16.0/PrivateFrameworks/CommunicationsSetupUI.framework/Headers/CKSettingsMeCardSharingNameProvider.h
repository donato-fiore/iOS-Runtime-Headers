// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSETTINGSMECARDSHARINGNAMEPROVIDER_H
#define CKSETTINGSMECARDSHARINGNAMEPROVIDER_H

@class NSString;
@protocol CNMeCardSharingNameProvider;

#import <Foundation/Foundation.h>


@interface CKSettingsMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly) Class superclass;


+(id)nameProviderForNickname:(id)arg0 ;


@end


#endif