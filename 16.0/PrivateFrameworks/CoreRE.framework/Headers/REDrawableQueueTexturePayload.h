// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDRAWABLEQUEUETEXTUREPAYLOAD_H
#define REDRAWABLEQUEUETEXTUREPAYLOAD_H



#import "RESharedResourcePayload.h"
#import "REDrawableQueuePayload.h"

@interface REDrawableQueueTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) REDrawableQueuePayload *drawableQueue; // ivar: _drawableQueue
@property (readonly, nonatomic) RESharedResourcePayload *placeholderTexture; // ivar: _placeholderTexture


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrawableQueue:(id)arg0 placeholderTexture:(id)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif