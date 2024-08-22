// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFSETAPPASSOCIATEDDOMAINSENABLEDIRECTDOWNLOADSREQUEST_H
#define DMFSETAPPASSOCIATEDDOMAINSENABLEDIRECTDOWNLOADSREQUEST_H

@class NSNumber;


#import "DMFAppRequest.h"

@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif