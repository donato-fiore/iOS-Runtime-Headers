// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDEVELOPERTOKENDEFAULTPROVIDER_H
#define ICDEVELOPERTOKENDEFAULTPROVIDER_H

@class NSString;
@protocol ICDeveloperTokenProvider, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDeveloperTokenForClientInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif