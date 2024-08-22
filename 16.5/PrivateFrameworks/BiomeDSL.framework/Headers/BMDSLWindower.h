// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLWINDOWER_H
#define BMDSLWINDOWER_H

@class NSString;


#import "BMDSL.h"
#import "BMDSLWindowAssigner.h"

@interface BMDSLWindower : BMDSL

@property (readonly, nonatomic) BMDSLWindowAssigner *assigner; // ivar: _assigner
@property (readonly, copy, nonatomic) NSString *keyedPath; // ivar: _keyedPath
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream


+(BOOL)supportsSecureCoding;
+(id)name;
-(id)bpsPublisher;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 keyedPath:(id)arg1 assigner:(id)arg2 ;
-(id)initWithUpstream:(id)arg0 keyedPath:(id)arg1 assigner:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif