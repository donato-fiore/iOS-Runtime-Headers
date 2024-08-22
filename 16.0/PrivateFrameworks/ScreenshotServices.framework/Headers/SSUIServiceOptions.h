// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSUISERVICEOPTIONS_H
#define SSUISERVICEOPTIONS_H

@class NSString;
@protocol BSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSUIServiceOptionsAssetMetadata.h"

@interface SSUIServiceOptions : NSObject <BSXPCSecureCoding, NSCopying>



@property (copy, nonatomic) SSUIServiceOptionsAssetMetadata *assetMetadata; // ivar: _assetMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger flashStyle; // ivar: _flashStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger saveLocation; // ivar: _saveLocation
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif