// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMECARDSHARINGRESULT_H
#define CNMECARDSHARINGRESULT_H

@class CNContactImage, NSString;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingResult : NSObject

@property (readonly, nonatomic) CNContactImage *contactImage; // ivar: _contactImage
@property (readonly, nonatomic) BOOL didSaveImageToMeCard; // ivar: _didSaveImageToMeCard
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSString *givenName; // ivar: _givenName


-(id)description;
-(id)initWithGivenName:(id)arg0 familyName:(id)arg1 contactImage:(id)arg2 didSaveImageToMeCard:(BOOL)arg3 ;


@end


#endif