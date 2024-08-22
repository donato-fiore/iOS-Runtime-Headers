// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYINFO_H
#define HAPACCESSORYINFO_H

@class HMFObject, NSString, NSNumber;



@interface HAPAccessoryInfo : HMFObject

@property (readonly, nonatomic) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) NSString *blacklisted; // ivar: _blacklisted
@property (readonly, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, nonatomic) NSString *certificationStatus; // ivar: _certificationStatus
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *ppid; // ivar: _ppid


-(BOOL)isBlacklisted;
-(BOOL)isCertified;
-(id)description;
-(id)initWithName:(id)arg0 manufacturer:(id)arg1 modelName:(id)arg2 category:(id)arg3 certificationStatus:(id)arg4 blacklisted:(id)arg5 ppid:(id)arg6 ;


@end


#endif