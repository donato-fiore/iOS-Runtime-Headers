// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIQUERYCONTEXT_H
#define VIQUERYCONTEXT_H

@class NSString, NSURL, CLLocation;
@protocol NSCopying, MTLDevice;

#import <Foundation/Foundation.h>


@interface VIQueryContext : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSObject<MTLDevice> *preferredMetalDevice; // ivar: _preferredMetalDevice
@property (readonly, nonatomic) NSUInteger queryID; // ivar: _queryID
@property (readonly, nonatomic) NSURL *referralURL; // ivar: _referralURL
@property (readonly, nonatomic) CGFloat uiScale; // ivar: _uiScale


+(id)contextWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQueryID:(NSUInteger)arg0 applicationIdentifier:(id)arg1 uiScale:(CGFloat)arg2 location:(id)arg3 imageURL:(id)arg4 referralURL:(id)arg5 imageType:(NSInteger)arg6 featureIdentifier:(id)arg7 preferredMetalDevice:(id)arg8 ;


@end


#endif