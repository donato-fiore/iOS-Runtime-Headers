// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLALLOWLIST_H
#define APODMLALLOWLIST_H

@class NSSet;


#import "APOdmlSingleton.h"

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList; // ivar: _allowList


+(id)sharedInstance;
-(BOOL)isAllowed:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(void)reinitializeAllowList;


@end


#endif