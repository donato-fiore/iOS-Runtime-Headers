// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESHAREDMEMORYTEXTUREPAYLOAD_H
#define RESHAREDMEMORYTEXTUREPAYLOAD_H

@protocol OS_dispatch_data;


#import "RESharedResourcePayload.h"

@interface RESharedMemoryTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data; // ivar: _data


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif