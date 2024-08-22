// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSMEDIAANALYSISHELPER_H
#define CLSMEDIAANALYSISHELPER_H

@protocol CLSFaceIdentificationProtocol;

#import <Foundation/Foundation.h>


@interface CLSMediaAnalysisHelper : NSObject <CLSFaceIdentificationProtocol>





-(id)requestIdentificationOfFaces:(id)arg0 error:(*id)arg1 ;


@end


#endif