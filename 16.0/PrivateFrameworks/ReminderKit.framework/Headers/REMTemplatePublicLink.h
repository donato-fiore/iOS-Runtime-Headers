// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATEPUBLICLINK_H
#define REMTEMPLATEPUBLICLINK_H

@class NSDate, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMTemplatePublicLinkConfiguration.h"

@interface REMTemplatePublicLink : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL canBeUpdated; // ivar: _canBeUpdated
@property (readonly, nonatomic) REMTemplatePublicLinkConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 creationDate:(id)arg2 lastModifiedDate:(id)arg3 expirationDate:(id)arg4 canBeUpdated:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif