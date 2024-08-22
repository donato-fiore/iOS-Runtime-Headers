// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOPERSON_H
#define MOPERSON_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MOPerson : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSString *family; // ivar: _family
@property (retain, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalIdentifier:(id)arg0 name:(id)arg1 contactIdentifier:(id)arg2 family:(id)arg3 ;
-(id)initWithPersonDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif