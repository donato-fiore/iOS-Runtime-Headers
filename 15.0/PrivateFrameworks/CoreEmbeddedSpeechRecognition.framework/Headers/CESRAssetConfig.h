// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CESRASSETCONFIG_H
#define CESRASSETCONFIG_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CESRAssetConfig : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger assetType; // ivar: _assetType
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 assetType:(NSUInteger)arg1 ;
-(id)initWithLanguage:(id)arg0 task:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif