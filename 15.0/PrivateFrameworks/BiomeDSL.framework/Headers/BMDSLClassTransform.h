// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLCLASSTRANSFORM_H
#define BMDSLCLASSTRANSFORM_H

@class NSString;
@protocol BMDSLTransform;


#import "BMDSLBaseCodable.h"

@interface BMDSLClassTransform : BMDSLBaseCodable <BMDSLTransform>



@property (copy, nonatomic) NSString *className; // ivar: _className
@property (copy, nonatomic) NSString *transformName; // ivar: _transformName


+(BOOL)supportsSecureCoding;
+(id)withClassName:(id)arg0 selector:(SEL)arg1 ;
+(id)withClassName:(id)arg0 transformName:(id)arg1 ;
-(id)initWithClassName:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithClassName:(id)arg0 transformName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 className:(id)arg2 transformName:(id)arg3 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif