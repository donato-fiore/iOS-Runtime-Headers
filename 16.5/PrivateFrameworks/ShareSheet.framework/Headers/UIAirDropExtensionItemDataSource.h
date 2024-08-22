// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAIRDROPEXTENSIONITEMDATASOURCE_H
#define UIAIRDROPEXTENSIONITEMDATASOURCE_H

@class NSString;
@protocol UIActivityExtensionItemDataProviding;

#import <Foundation/Foundation.h>


@interface UIAirDropExtensionItemDataSource : NSObject <UIActivityExtensionItemDataProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_airdropSupplementalSecurityContextForURL:(id)arg0 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg0 extensionItemDataRequest:(id)arg1 ;


@end


#endif