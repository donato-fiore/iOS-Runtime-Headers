// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGINVITATIONMETADATA_H
#define PKAPPLETSUBCREDENTIALSHARINGINVITATIONMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *anonymizationSalt; // ivar: _anonymizationSalt
@property (nonatomic) BOOL shouldRequestInvitation; // ivar: _shouldRequestInvitation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif