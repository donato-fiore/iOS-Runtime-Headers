// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMROSTERPROVIDERFACTORY_H
#define CRKASMROSTERPROVIDERFACTORY_H


#import <Foundation/Foundation.h>


@interface CRKASMRosterProviderFactory : NSObject



-(id)makeInstructorRosterProvider;
-(id)makeRosterProviderWithConfiguration:(id)arg0 ;
-(id)makeStudentRosterProvider;


@end


#endif