// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCLOUDIDENTIFIER_H
#define PHCLOUDIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *fingerPrint; // ivar: _fingerPrint
@property (readonly, nonatomic) NSString *identifierCode; // ivar: _identifierCode
@property (readonly, nonatomic) NSString *localCloudIdentifier; // ivar: _localCloudIdentifier
@property (readonly, nonatomic) NSString *stringValue;


+(BOOL)supportsSecureCoding;
+(id)_notFoundIdentifier;
+(id)notFoundIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initAsNotFoundIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalCloudIdentifier:(id)arg0 identifierCode:(id)arg1 fingerPrint:(id)arg2 ;
-(id)initWithStringValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif