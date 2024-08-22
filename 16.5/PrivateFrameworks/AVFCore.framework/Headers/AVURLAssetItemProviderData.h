// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVURLASSETITEMPROVIDERDATA_H
#define AVURLASSETITEMPROVIDERDATA_H

@class NSSecurityScopedURLWrapper, NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVURLAssetItemProviderData : NSObject <NSSecureCoding>

 {
    NSSecurityScopedURLWrapper *_securityScopedURLWrapper;
}


@property (readonly, nonatomic) NSDictionary *assetInitializationOptions; // ivar: _assetInitializationOptions
@property (readonly, nonatomic) NSURL *securityScopedURL;


+(BOOL)supportsSecureCoding;
+(id)itemProviderDataWithURL:(id)arg0 assetInitializationOptions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 assetInitializationOptions:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif