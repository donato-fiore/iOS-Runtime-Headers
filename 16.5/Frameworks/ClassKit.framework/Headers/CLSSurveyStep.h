// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSURVEYSTEP_H
#define CLSSURVEYSTEP_H



#import "CLSAbstractSurveyStep.h"

@interface CLSSurveyStep : CLSAbstractSurveyStep {
    NSInteger _version;
    NSInteger _type;
}




+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(NSInteger)type;
-(NSInteger)version;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setVersion:(NSInteger)arg0 ;


@end


#endif