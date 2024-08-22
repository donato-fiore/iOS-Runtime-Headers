// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STFAMILYMEMBER_H
#define STFAMILYMEMBER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface STFamilyMember : NSObject

@property (readonly, copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) BOOL isOrganizer; // ivar: _isOrganizer
@property (nonatomic) BOOL isParent; // ivar: _isParent
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, copy, nonatomic) NSString *memberType; // ivar: _memberType


-(id)description;
-(id)initWithDSID:(id)arg0 altDSID:(id)arg1 appleID:(id)arg2 memberType:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 isMe:(BOOL)arg6 isParent:(BOOL)arg7 isOrganizer:(BOOL)arg8 ;


@end


#endif