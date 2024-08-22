// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTEXTUALDUETEVENTMETA_H
#define TPSCONTEXTUALDUETEVENTMETA_H

@class NSString, NSNumber, NSDictionary;


#import "TPSSerializableObject.h"

@interface TPSContextualDuetEventMeta : TPSSerializableObject

@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSNumber *donatedBySiri; // ivar: _donatedBySiri
@property (copy, nonatomic) NSString *intentClass; // ivar: _intentClass
@property (copy, nonatomic) NSNumber *intentDirection; // ivar: _intentDirection
@property (copy, nonatomic) NSString *intentVerb; // ivar: _intentVerb
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif