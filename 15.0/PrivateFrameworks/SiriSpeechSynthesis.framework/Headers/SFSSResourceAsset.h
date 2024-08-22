// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSRESOURCEASSET_H
#define SFSSRESOURCEASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSSResourceAsset : NSObject

@property (copy, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (readonly, nonatomic) NSInteger contentVersion; // ivar: _contentVersion
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language


+(id)generateResourceAssetFromResourceKeyString:(id)arg0 ;
-(id)init:(id)arg0 contentVersion:(NSInteger)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)key;


@end


#endif