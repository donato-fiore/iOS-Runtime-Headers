// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLCACHEFILEPROVIDERVERSIONEDFILEIDENTIFIER_H
#define QLCACHEFILEPROVIDERVERSIONEDFILEIDENTIFIER_H

@protocol NSSecureCoding;


#import "QLCacheVersionedFileIdentifier.h"
#import "QLCacheFileProviderFileIdentifier.h"

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>



@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier;


-(id)initWithFileIdentifier:(id)arg0 version:(id)arg1 ;
-(id)initWithThumbnailRequest:(id)arg0 ;


@end


#endif