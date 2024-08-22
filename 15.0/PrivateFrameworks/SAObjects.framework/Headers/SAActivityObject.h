// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAACTIVITYOBJECT_H
#define SAACTIVITYOBJECT_H

@class NSDate, NSDictionary, NSString;


#import "SADomainObject.h"
#import "SAClientUserActivity.h"

@interface SAActivityObject : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SAClientUserActivity *userActivity;
@property (copy, nonatomic) NSString *visibility;


+(id)activityObject;
+(id)activityObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif