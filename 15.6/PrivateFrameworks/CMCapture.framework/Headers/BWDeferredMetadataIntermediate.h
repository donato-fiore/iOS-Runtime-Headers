// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDMETADATAINTERMEDIATE_H
#define BWDEFERREDMETADATAINTERMEDIATE_H

@class NSString;


#import "BWDeferredDictionaryIntermediate.h"

@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate

@property (readonly, nonatomic) NSString *bufferTag; // ivar: _bufferTag


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 tag:(id)arg1 bufferTag:(id)arg2 URL:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif