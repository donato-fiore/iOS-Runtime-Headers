// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETECONTACT_H
#define CRKCONCRETECONTACT_H

@class NSString, NSData, CNContact;
@protocol CRKContact;

#import <Foundation/Foundation.h>


@interface CRKConcreteContact : NSObject <CRKContact>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic) CNContact *underlyingContact; // ivar: _underlyingContact


-(id)initWithContact:(id)arg0 ;


@end


#endif