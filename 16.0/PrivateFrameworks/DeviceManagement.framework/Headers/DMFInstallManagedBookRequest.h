// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFINSTALLMANAGEDBOOKREQUEST_H
#define DMFINSTALLMANAGEDBOOKREQUEST_H

@class NSURL, NSString, NSNumber;


#import "DMFTaskRequest.h"

@interface DMFInstallManagedBookRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSNumber *iTunesStoreID; // ivar: _iTunesStoreID
@property (copy, nonatomic) NSString *originator; // ivar: _originator
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif