// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWUSER_H
#define WFWORKFLOWUSER_H

@class NSDate, NSString, NSDictionary, NSUUID, NSNumber, NSURL;
@protocol MTLJSONSerializing;


#import "MTLModel.h"

@interface WFWorkflowUser : MTLModel <MTLJSONSerializing>



@property (readonly, nonatomic) NSDate *dateJoined; // ivar: _dateJoined
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *isAdmin; // ivar: _isAdmin
@property (readonly, nonatomic) NSInteger mainIdentity; // ivar: _mainIdentity
@property (readonly, nonatomic) NSURL *profileImageURL; // ivar: _profileImageURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *twitter; // ivar: _twitter
@property (readonly, nonatomic) NSString *twitterDisplayName;
@property (readonly, nonatomic) NSString *websiteDisplayName;
@property (readonly, nonatomic) NSURL *websiteURL; // ivar: _websiteURL


+(id)JSONKeyPathsByPropertyKey;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif