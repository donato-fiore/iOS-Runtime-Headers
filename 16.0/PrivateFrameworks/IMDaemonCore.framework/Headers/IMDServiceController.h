// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDSERVICECONTROLLER_H
#define IMDSERVICECONTROLLER_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface IMDServiceController : NSObject {
    NSMutableDictionary *_services;
}


@property (readonly, nonatomic) NSArray *allServices;


+(id)sharedInstance;
-(id)init;
-(id)serviceWithName:(id)arg0 ;
-(void)dealloc;
-(void)registerSessionClassWithBundle:(id)arg0 ;


@end


#endif