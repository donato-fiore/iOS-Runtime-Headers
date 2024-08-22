// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLCOLLECT_H
#define BMDSLCOLLECT_H



#import "BMDSL.h"

@interface BMDSLCollect : BMDSL

@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 name:(id)arg1 version:(unsigned int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif