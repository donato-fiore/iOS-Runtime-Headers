// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDINFERENCEARRAYINTERMEDIATE_H
#define BWDEFERREDINFERENCEARRAYINTERMEDIATE_H

@class NSString;


#import "BWDeferredArrayIntermediate.h"

@interface BWDeferredInferenceArrayIntermediate : BWDeferredArrayIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachmentKey; // ivar: _inferenceAttachmentKey
@property (readonly, nonatomic) NSString *portType; // ivar: _portType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithArray:(id)arg0 tag:(id)arg1 inferenceAttachmentKey:(id)arg2 portType:(id)arg3 URL:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif