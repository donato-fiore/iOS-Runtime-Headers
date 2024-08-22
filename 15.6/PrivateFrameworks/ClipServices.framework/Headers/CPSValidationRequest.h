// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSVALIDATIONREQUEST_H
#define CPSVALIDATIONREQUEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPSValidationRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, nonatomic) NSArray *urls; // ivar: _urls


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLs:(id)arg0 bundleIDs:(id)arg1 ;
-(id)initWithValidation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif