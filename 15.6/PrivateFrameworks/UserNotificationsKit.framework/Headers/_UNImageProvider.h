// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNIMAGEPROVIDER_H
#define _UNIMAGEPROVIDER_H


#import <Foundation/Foundation.h>


@interface _UNImageProvider : NSObject



+(id)_contactForImageRenderingFromContentURLWithContext:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)_contactsForImageRenderingFromRecipientsWithContext:(id)arg0 bundleIdentifier:(id)arg1 descriptorForRequiredKeys:(id)arg2 ;
+(id)_imageDataFromFileSystemForContactURL:(id)arg0 ;
+(id)_imageDataFromIntentsForContentURL:(id)arg0 ;
+(id)generateEphemeralContactsForImageRenderingWithContext:(id)arg0 bundleIdentifier:(id)arg1 descriptorForRequiredKeys:(id)arg2 ;
+(id)generateEphemeralContactsForImageRenderingWithContext:(id)arg0 descriptorForRequiredKeys:(id)arg1 ;
+(id)imageDataForContentURL:(id)arg0 ;


@end


#endif