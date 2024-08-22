// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYINFO_H
#define HAPACCESSORYINFO_H

@class HMFObject, NSNumber, NSString;



@interface HAPAccessoryInfo : HMFObject

@property (readonly, nonatomic) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, nonatomic) NSString *certificationStatus; // ivar: _certificationStatus
@property (readonly, nonatomic) NSString *denylisted; // ivar: _denylisted
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *ppid; // ivar: _ppid


-(BOOL)isCertified;
-(BOOL)isDenylisted;
-(id)description;
-(id)initWithName:(id)arg0 manufacturer:(id)arg1 modelName:(id)arg2 category:(id)arg3 certificationStatus:(id)arg4 denylisted:(id)arg5 ppid:(id)arg6 ;


@end


#endif