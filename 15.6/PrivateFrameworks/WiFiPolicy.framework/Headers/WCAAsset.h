// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCAASSET_H
#define WCAASSET_H

@class NSString, MAAsset;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WCAAsset : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *extension; // ivar: _extension
@property NSUInteger installedAssetVersion; // ivar: _installedAssetVersion
@property (retain, nonatomic) MAAsset *latestInstalledAsset; // ivar: _latestInstalledAsset
@property NSUInteger latestInstalledVersion; // ivar: _latestInstalledVersion
@property (retain, nonatomic) MAAsset *latestNotInstalledAsset; // ivar: _latestNotInstalledAsset
@property NSUInteger latestNotInstalledVersion; // ivar: _latestNotInstalledVersion
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)assetWithName:(id)arg0 andExtension:(id)arg1 ;
+(id)beaconsDataAsset;
+(id)wifiBehaviorPlistAsset;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif