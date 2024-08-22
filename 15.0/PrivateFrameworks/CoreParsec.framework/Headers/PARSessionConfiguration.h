// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARSESSIONCONFIGURATION_H
#define PARSESSIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, PARResultFactory;

#import <Foundation/Foundation.h>


@interface PARSessionConfiguration : NSObject <NSSecureCoding>



@property BOOL dontPreloadImages; // ivar: _dontPreloadImages
@property BOOL enablePersonalizedRanking; // ivar: _enablePersonalizedRanking
@property (readonly) NSObject<PARResultFactory> *factory; // ivar: _factory
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property BOOL parsecEnabled; // ivar: _parsecEnabled
@property (readonly, copy) NSString *userAgent; // ivar: _userAgent


+(BOOL)supportsSecureCoding;
+(id)defaultSessionConfiguration;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithId:(id)arg0 userAgent:(id)arg1 ;
-(id)initWithId:(id)arg0 userAgent:(id)arg1 factory:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif