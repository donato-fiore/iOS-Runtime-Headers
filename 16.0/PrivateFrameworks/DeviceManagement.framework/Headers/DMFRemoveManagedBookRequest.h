// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFREMOVEMANAGEDBOOKREQUEST_H
#define DMFREMOVEMANAGEDBOOKREQUEST_H

@class NSNumber, NSString;


#import "DMFTaskRequest.h"

@interface DMFRemoveManagedBookRequest : DMFTaskRequest

@property (copy, nonatomic) NSNumber *iTunesStoreID; // ivar: _iTunesStoreID
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif