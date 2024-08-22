// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICKITREQUESTCONTEXT_H
#define ICMUSICKITREQUESTCONTEXT_H

@class NSString;
@protocol NSSecureCoding, ICDeveloperTokenProvider;


#import "ICStoreRequestContext.h"

@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding>

 {
    NSString *_cachedDescription;
}


@property (readonly, nonatomic) NSInteger _storeRequestPersonalizationStyle;
@property (readonly, nonatomic) NSObject<ICDeveloperTokenProvider> *developerTokenProvider; // ivar: _developerTokenProvider
@property (readonly, nonatomic) NSInteger personalizationMethod; // ivar: _personalizationMethod
@property (readonly, nonatomic) NSInteger personalizationStyle;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)copyWithBlock:(id)arg0 ;
-(id)description;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif