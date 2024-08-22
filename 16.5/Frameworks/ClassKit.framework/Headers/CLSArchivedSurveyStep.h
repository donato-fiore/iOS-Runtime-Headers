// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSARCHIVEDSURVEYSTEP_H
#define CLSARCHIVEDSURVEYSTEP_H



#import "CLSAbstractSurveyStep.h"

@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    NSInteger _version;
    NSInteger _type;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)type;
-(NSInteger)version;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setVersion:(NSInteger)arg0 ;


@end


#endif