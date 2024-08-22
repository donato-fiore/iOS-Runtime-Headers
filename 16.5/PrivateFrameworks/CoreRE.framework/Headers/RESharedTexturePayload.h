// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESHAREDTEXTUREPAYLOAD_H
#define RESHAREDTEXTUREPAYLOAD_H

@class MTLSharedTextureHandle;


#import "RESharedResourcePayload.h"

@interface RESharedTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) MTLSharedTextureHandle *handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameUnderlyingIOSurface:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTexture:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif