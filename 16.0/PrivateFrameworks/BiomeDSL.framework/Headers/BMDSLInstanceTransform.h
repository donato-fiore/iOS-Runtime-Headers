// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLINSTANCETRANSFORM_H
#define BMDSLINSTANCETRANSFORM_H

@class NSString;
@protocol BMDSLTransform;


#import "BMDSL.h"

@interface BMDSLInstanceTransform : BMDSL <BMDSLTransform>



@property (copy, nonatomic) NSString *transformName; // ivar: _transformName


+(BOOL)supportsSecureCoding;
+(id)withSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 transformName:(id)arg2 ;
-(id)initWithSelector:(SEL)arg0 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif