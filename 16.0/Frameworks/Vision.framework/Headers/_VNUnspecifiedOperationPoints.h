// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VNUNSPECIFIEDOPERATIONPOINTS_H
#define _VNUNSPECIFIEDOPERATIONPOINTS_H



#import "VNOperationPoints.h"

@interface _VNUnspecifiedOperationPoints : VNOperationPoints



+(BOOL)supportsSecureCoding;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withPrecision:(float)arg2 error:(*id)arg3 ;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withRecall:(float)arg2 error:(*id)arg3 ;
-(BOOL)getDefaultConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)getPrecision:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(BOOL)getRecall:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif