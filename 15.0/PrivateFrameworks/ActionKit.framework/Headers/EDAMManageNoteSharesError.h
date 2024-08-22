// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMMANAGENOTESHARESERROR_H
#define EDAMMANAGENOTESHARESERROR_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMNotFoundException.h"
#import "EDAMUserException.h"

@interface EDAMManageNoteSharesError : FATObject

@property (retain, nonatomic) NSNumber *identityID; // ivar: _identityID
@property (retain, nonatomic) EDAMNotFoundException *notFoundException; // ivar: _notFoundException
@property (retain, nonatomic) EDAMUserException *userException; // ivar: _userException
@property (retain, nonatomic) NSNumber *userID; // ivar: _userID


+(id)structFields;
+(id)structName;


@end


#endif