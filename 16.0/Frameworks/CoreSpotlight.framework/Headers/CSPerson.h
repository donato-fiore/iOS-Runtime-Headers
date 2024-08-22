// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPERSON_H
#define CSPERSON_H

@class NSString, NSArray;
@protocol CSCoderEncoder, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>



@property (copy) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *handleIdentifier; // ivar: _handleIdentifier
@property (retain, nonatomic) NSArray *handles; // ivar: _handles
@property (retain, nonatomic) NSString *photosPersonIdentifier; // ivar: _photosPersonIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 handles:(id)arg1 handleIdentifier:(id)arg2 ;
-(id)initWithDisplayName:(id)arg0 handles:(id)arg1 handleIdentifier:(id)arg2 photosPersonIdentifier:(id)arg3 ;
-(void)encodeWithCSCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif