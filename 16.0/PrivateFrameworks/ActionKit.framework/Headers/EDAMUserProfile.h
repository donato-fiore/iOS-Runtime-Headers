// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMUSERPROFILE_H
#define EDAMUSERPROFILE_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMBusinessUserAttributes.h"

@interface EDAMUserProfile : FATObject

@property (retain, nonatomic) EDAMBusinessUserAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSNumber *joined; // ivar: _joined
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *photoLastUpdated; // ivar: _photoLastUpdated
@property (retain, nonatomic) NSString *photoUrl; // ivar: _photoUrl
@property (retain, nonatomic) NSNumber *role; // ivar: _role
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)structFields;
+(id)structName;


@end


#endif