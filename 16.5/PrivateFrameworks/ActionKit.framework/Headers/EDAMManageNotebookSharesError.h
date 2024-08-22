// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMMANAGENOTEBOOKSHARESERROR_H
#define EDAMMANAGENOTEBOOKSHARESERROR_H



#import "FATObject.h"
#import "EDAMNotFoundException.h"
#import "EDAMUserException.h"
#import "EDAMUserIdentity.h"

@interface EDAMManageNotebookSharesError : FATObject

@property (retain, nonatomic) EDAMNotFoundException *notFoundException; // ivar: _notFoundException
@property (retain, nonatomic) EDAMUserException *userException; // ivar: _userException
@property (retain, nonatomic) EDAMUserIdentity *userIdentity; // ivar: _userIdentity


+(id)structFields;
+(id)structName;


@end


#endif