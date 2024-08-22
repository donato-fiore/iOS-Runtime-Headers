// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELHOMESHARINGASSET_H
#define MPMODELHOMESHARINGASSET_H

@class NSURL;


#import "MPModelObject.h"

@interface MPModelHomeSharingAsset : MPModelObject

@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isAvailable) BOOL available;
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL;


+(id)__available_KEY;


@end


#endif