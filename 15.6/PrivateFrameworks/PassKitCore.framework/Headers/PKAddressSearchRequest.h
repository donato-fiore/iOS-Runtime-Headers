// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDRESSSEARCHREQUEST_H
#define PKADDRESSSEARCHREQUEST_H

@class NSString, NSArray, NSPredicate;

#import <Foundation/Foundation.h>


@interface PKAddressSearchRequest : NSObject

@property (copy, nonatomic) id *contactFilter; // ivar: _contactFilter
@property (copy, nonatomic) NSString *fragment; // ivar: _fragment
@property (retain, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch
@property (retain, nonatomic) NSString *outputKey; // ivar: _outputKey
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_contactPropertyFilterForKey:(SEL)arg0 propertyName:(id)arg1 ;
-(id)allKeys;
-(id)contactKeys;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithFullText:(id)arg0 ;
-(id)initWithNameComponents:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 ;
-(id)postalAddressKeys;


@end


#endif