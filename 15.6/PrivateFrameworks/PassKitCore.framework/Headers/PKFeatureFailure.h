// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFEATUREFAILURE_H
#define PKFEATUREFAILURE_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFeatureFailure : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) NSString *serverDescription; // ivar: _serverDescription


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)errorRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif