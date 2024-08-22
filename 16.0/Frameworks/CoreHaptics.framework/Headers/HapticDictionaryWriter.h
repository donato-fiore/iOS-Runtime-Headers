// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPTICDICTIONARYWRITER_H
#define HAPTICDICTIONARYWRITER_H


#import <Foundation/Foundation.h>


@interface HapticDictionaryWriter : NSObject {
    NSUInteger _urlIndex;
}




-(id)eventParamsToArray:(id)arg0 ;
-(id)eventToDictionary:(id)arg0 embeddedResourceInfo:(id)arg1 ;
-(id)paramCurveControlPointsToArray:(id)arg0 ;
-(id)paramCurveToDictionary:(id)arg0 ;
-(id)paramToDictionary:(id)arg0 ;
-(id)patternToDictionary:(id)arg0 events:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 embeddedResourceInfo:(id)arg4 configuration:(id)arg5 ;


@end


#endif