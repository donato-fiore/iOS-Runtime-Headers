// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETENAMECOMPONENTS_H
#define CNAUTOCOMPLETENAMECOMPONENTS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNAutocompleteNameComponents : NSObject <NSCopying>



@property (readonly) NSString *firstName; // ivar: _firstName
@property (readonly) NSString *lastName; // ivar: _lastName
@property (readonly) NSString *nameSuffix; // ivar: _nameSuffix
@property (readonly) NSString *nickname; // ivar: _nickname


+(id)contactKeys;
+(id)nameComponentsWithFirstName:(id)arg0 lastName:(id)arg1 nickname:(id)arg2 nameSuffix:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif