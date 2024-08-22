// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMNAMECOMPONENTS_H
#define BMNAMECOMPONENTS_H

@class NSString;
@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMNameComponents : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (readonly, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (readonly, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) NSString *previousFamilyName; // ivar: _previousFamilyName


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithNamePrefix:(id)arg0 givenName:(id)arg1 middleName:(id)arg2 previousFamilyName:(id)arg3 familyName:(id)arg4 nameSuffix:(id)arg5 nickname:(id)arg6 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif