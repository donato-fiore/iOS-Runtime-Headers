// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUISERVICEOPTIONSASSETMETADATA_H
#define SSUISERVICEOPTIONSASSETMETADATA_H

@class NSArray, NSString;
@protocol NSCopying, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SSUIServiceOptionsAssetMetadata : NSObject <NSCopying, BSXPCSecureCoding>



@property (copy, nonatomic) NSArray *assetDescription; // ivar: _assetDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif