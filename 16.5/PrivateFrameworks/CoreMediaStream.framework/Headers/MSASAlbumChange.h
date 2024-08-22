// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASALBUMCHANGE_H
#define MSASALBUMCHANGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MSASInvitation.h"

@interface MSASAlbumChange : NSObject

@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (retain, nonatomic) MSASInvitation *invitation; // ivar: _invitation
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *ownerEmail; // ivar: _ownerEmail
@property (copy, nonatomic) NSString *ownerFirstName; // ivar: _ownerFirstName
@property (copy, nonatomic) NSString *ownerFullName; // ivar: _ownerFullName
@property (copy, nonatomic) NSString *ownerLastName; // ivar: _ownerLastName
@property (copy, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (nonatomic) BOOL wasDeleted; // ivar: _wasDeleted


-(id)description;


@end


#endif