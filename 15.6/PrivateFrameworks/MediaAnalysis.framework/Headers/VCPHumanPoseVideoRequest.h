// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPHUMANPOSEVIDEOREQUEST_H
#define VCPHUMANPOSEVIDEOREQUEST_H

@class NSArray, NSMutableArray;


#import "VCPRequest.h"
#import "VCPImageHumanPoseAnalyzer.h"

@interface VCPHumanPoseVideoRequest : VCPRequest {
    int _personID;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    VCPImageHumanPoseAnalyzer *_analyzer;
    NSArray *_existingPersons;
    NSMutableArray *_existingPersonsArray;
}




-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(float)bodyDistance:(id)arg0 withBodyB:(id)arg1 ;
-(float)normDistance:(struct CGPoint )arg0 point2:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(int)associatePersons:(id)arg0 withExisingPersons:(id)arg1 ;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;
-(void)computeActionScoreForPerson:(id)arg0 ;
-(void)computeVarWithID:(id)arg0 index1:(int)arg1 index2:(int)arg2 interVar:(*float)arg3 intraVar:(*float)arg4 ;


@end


#endif