// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSASSETSCONFIGURATION_H
#define TPSASSETSCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPSAssetFileInfoManager.h"
#import "TPSAssets.h"

@interface TPSAssetsConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager; // ivar: _assetFileInfoManager
@property (copy, nonatomic) TPSAssets *assets; // ivar: _assets
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(BOOL)supportsSecureCoding;
-(id)cacheIdentifierForType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)identifierForType:(NSInteger)arg0 ;
-(id)initWithAssets:(id)arg0 language:(id)arg1 userInterfaceStyle:(NSInteger)arg2 assetFileInfoManager:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif