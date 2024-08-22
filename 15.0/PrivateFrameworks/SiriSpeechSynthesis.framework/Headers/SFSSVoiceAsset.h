// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSVOICEASSET_H
#define SFSSVOICEASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSSVoiceAsset : NSObject

@property (copy, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (readonly, nonatomic) NSInteger contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) NSInteger footprint; // ivar: _footprint
@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)generateVoiceAssetFromVoiceKeyString:(id)arg0 ;
-(id)init:(id)arg0 gender:(NSInteger)arg1 name:(id)arg2 type:(NSInteger)arg3 footprint:(NSInteger)arg4 contentVersion:(NSInteger)arg5 ;
-(id)initWithPath:(id)arg0 ;
-(id)key;


@end


#endif