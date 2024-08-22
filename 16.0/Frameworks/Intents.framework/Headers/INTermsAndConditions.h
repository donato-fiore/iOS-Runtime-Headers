// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERMSANDCONDITIONS_H
#define INTERMSANDCONDITIONS_H

@class NSString, NSURL;
@protocol INTermsAndConditionsExport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedTermsAndConditionsText; // ivar: _localizedTermsAndConditionsText
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *termsAndConditionsURL; // ivar: _termsAndConditionsURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedTermsAndConditionsText:(id)arg0 privacyPolicyURL:(id)arg1 termsAndConditionsURL:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif