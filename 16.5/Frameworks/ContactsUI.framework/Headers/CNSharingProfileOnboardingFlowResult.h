// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARINGPROFILEONBOARDINGFLOWRESULT_H
#define CNSHARINGPROFILEONBOARDINGFLOWRESULT_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface CNSharingProfileOnboardingFlowResult : NSObject

@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic) BOOL didPersistImageToContact; // ivar: _didPersistImageToContact
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) NSUInteger sharingAudience; // ivar: _sharingAudience
@property (copy, nonatomic) NSString *type; // ivar: _type


-(id)description;


@end


#endif