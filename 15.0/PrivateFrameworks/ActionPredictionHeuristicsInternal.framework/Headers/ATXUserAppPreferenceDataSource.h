// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUSERAPPPREFERENCEDATASOURCE_H
#define ATXUSERAPPPREFERENCEDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXUserAppPreferenceDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(BOOL)appSupportsParameterCombination:(id)arg0 forIntent:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)parametersExistInValidCombinationsForParameters:(id)arg0 andValidCombinations:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)preferredAppForIntentName:(id)arg0 andParameterCombination:(id)arg1 callback:(id)arg2 ;


@end


#endif