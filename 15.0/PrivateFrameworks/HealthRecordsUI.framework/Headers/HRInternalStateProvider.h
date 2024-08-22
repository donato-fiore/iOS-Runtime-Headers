// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRINTERNALSTATEPROVIDER_H
#define HRINTERNALSTATEPROVIDER_H


#import <Foundation/Foundation.h>


@interface HRInternalStateProvider : NSObject {
    ? accountStore;
    ? conceptStore;
    ? healthRecordsStore;
    ? healthExperienceStore;
    ? recordCounts;
    ? sub;
    ? loadState;
    ? changeHandler;
    ? isObserving;
}




-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)dealloc;
-(void)fetchJSONWithCompletion:(id)arg0 ;


@end


#endif