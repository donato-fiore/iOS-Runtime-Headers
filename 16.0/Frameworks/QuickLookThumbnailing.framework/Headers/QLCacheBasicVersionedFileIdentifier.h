// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEBASICVERSIONEDFILEIDENTIFIER_H
#define QLCACHEBASICVERSIONEDFILEIDENTIFIER_H

@protocol NSSecureCoding;


#import "QLCacheVersionedFileIdentifier.h"
#import "QLCacheBasicFileIdentifier.h"

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>



@property (readonly) QLCacheBasicFileIdentifier *fileIdentifier;


-(id)initWithFileIdentifier:(id)arg0 version:(id)arg1 ;
-(id)initWithThumbnailRequest:(id)arg0 ;


@end


#endif