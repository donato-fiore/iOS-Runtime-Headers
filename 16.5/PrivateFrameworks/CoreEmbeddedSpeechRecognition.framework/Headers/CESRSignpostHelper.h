// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRSIGNPOSTHELPER_H
#define CESRSIGNPOSTHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CESRSignpostHelper : NSObject {
    NSMutableDictionary *_eventNameToId;
}




-(NSUInteger)fetchAndDestroySignpostIdForEventName:(id)arg0 ;
-(id)init;
-(void)storeSignpostId:(NSUInteger)arg0 forEventName:(id)arg1 ;


@end


#endif