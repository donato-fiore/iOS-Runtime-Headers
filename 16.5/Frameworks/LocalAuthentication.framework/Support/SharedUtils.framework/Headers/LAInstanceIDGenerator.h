// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAINSTANCEIDGENERATOR_H
#define LAINSTANCEIDGENERATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LAInstanceIDGenerator : NSObject {
    NSMutableDictionary *_currentIDs;
}




+(id)sharedInstance;
-(NSUInteger)nextInstanceIDInDomain:(id)arg0 ;
-(id)init;


@end


#endif