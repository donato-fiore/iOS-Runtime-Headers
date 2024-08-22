// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMCONTACT_H
#define EDAMCONTACT_H

@class NSString, NSData, NSNumber;


#import "FATObject.h"

@interface EDAMContact : FATObject

@property (retain, nonatomic) NSString *id; // ivar: _id
@property (retain, nonatomic) NSData *messagingPermit; // ivar: _messagingPermit
@property (retain, nonatomic) NSNumber *messagingPermitExpires; // ivar: _messagingPermitExpires
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *photoLastUpdated; // ivar: _photoLastUpdated
@property (retain, nonatomic) NSString *photoUrl; // ivar: _photoUrl
@property (retain, nonatomic) NSNumber *type; // ivar: _type


+(id)structFields;
+(id)structName;


@end


#endif