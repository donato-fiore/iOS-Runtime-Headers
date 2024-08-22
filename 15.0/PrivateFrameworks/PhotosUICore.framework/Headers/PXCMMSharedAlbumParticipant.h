// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSHAREDALBUMPARTICIPANT_H
#define PXCMMSHAREDALBUMPARTICIPANT_H

@class NSString;
@protocol PXCMMInvitationParticipant, NSCopying;

#import <Foundation/Foundation.h>


@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddressString; // ivar: _emailAddressString
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *phoneNumberString; // ivar: _phoneNumberString
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRecord:(id)arg0 ;


@end


#endif