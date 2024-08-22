// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSIDENTIFIEDSERVICEREGISTRY_H
#define CRSIDENTIFIEDSERVICEREGISTRY_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface CRSIdentifiedServiceRegistry : NSObject {
    NSMutableOrderedSet *_identifiedServices;
}




+(id)sharedInstance;
-(id)identifiedServices;
-(id)init;
-(void)registerIdentifiedService:(id)arg0 ;


@end


#endif