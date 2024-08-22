// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTCOUNTERSPERSISTENTSTORE_H
#define HMDEVENTCOUNTERSPERSISTENTSTORE_H

@class NSString;
@protocol HMDEventCountersStoring;

#import <Foundation/Foundation.h>


@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)unarchive;
-(void)archiveDictionary:(id)arg0 ;


@end


#endif