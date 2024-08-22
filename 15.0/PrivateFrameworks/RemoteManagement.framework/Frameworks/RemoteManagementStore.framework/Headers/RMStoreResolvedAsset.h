// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSTORERESOLVEDASSET_H
#define RMSTORERESOLVEDASSET_H

@class NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMStoreResolvedAsset : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *assetData; // ivar: _assetData
@property (readonly, copy, nonatomic) NSURL *assetFile; // ivar: _assetFile


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResolvedAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif