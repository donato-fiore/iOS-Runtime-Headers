// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLMAP_H
#define BMDSLMAP_H

@protocol BMDSLTransform;


#import "BMDSL.h"

@interface BMDSLMap : BMDSL

@property (readonly, nonatomic) NSObject<BMDSLTransform> *transform; // ivar: _transform
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream


+(BOOL)supportsSecureCoding;
+(id)name;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 transform:(id)arg1 ;
-(id)initWithUpstream:(id)arg0 transform:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif