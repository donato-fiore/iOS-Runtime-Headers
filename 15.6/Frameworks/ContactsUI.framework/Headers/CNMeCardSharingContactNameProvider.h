// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGCONTACTNAMEPROVIDER_H
#define CNMECARDSHARINGCONTACTNAMEPROVIDER_H

@class CNContact, NSString;
@protocol CNMeCardSharingNameProvider;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>



@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(id)familyName;
-(id)givenName;
-(id)initWithContact:(id)arg0 ;
-(id)middleName;
-(id)nickname;


@end


#endif