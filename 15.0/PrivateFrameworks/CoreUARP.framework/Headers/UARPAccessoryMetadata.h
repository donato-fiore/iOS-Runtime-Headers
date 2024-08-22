// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPACCESSORYMETADATA_H
#define UARPACCESSORYMETADATA_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>



@property NSUInteger accessoryCapability; // ivar: _accessoryCapability
@property unsigned short accessoryCategoryNumber; // ivar: _accessoryCategoryNumber
@property (copy) NSURL *accessoryInstallationGuideURL; // ivar: _accessoryInstallationGuideURL
@property (copy) NSString *accessoryMarketingName; // ivar: _accessoryMarketingName
@property (copy) NSString *accessoryModel; // ivar: _accessoryModel
@property (copy) NSString *manufacturerAppBundleID; // ivar: _manufacturerAppBundleID
@property (copy) NSString *manufacturerAppStoreID; // ivar: _manufacturerAppStoreID
@property (copy) NSString *manufacturerName; // ivar: _manufacturerName
@property (readonly) NSString *productGroup; // ivar: _productGroup
@property (readonly) NSString *productNumber; // ivar: _productNumber


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductGroup:(id)arg0 productNumber:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif