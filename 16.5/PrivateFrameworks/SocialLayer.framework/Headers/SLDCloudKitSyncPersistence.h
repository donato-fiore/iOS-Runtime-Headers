// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCLOUDKITSYNCPERSISTENCE_H
#define SLDCLOUDKITSYNCPERSISTENCE_H

@class NSString, NSUserDefaults, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SLDCloudKitSyncPersistence : NSObject {
    NSString *_name;
    NSString *_suiteName;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_cache;
    id *_nilValue;
}




-(id)initWithName:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)reset;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif