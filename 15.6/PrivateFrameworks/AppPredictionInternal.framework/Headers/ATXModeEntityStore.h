// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEENTITYSTORE_H
#define ATXMODEENTITYSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary *_entityStore;
}




+(id)sharedInstance;
-(id)appEntityForBundleId:(id)arg0 ;
-(id)init;
-(void)writeAppEntity:(id)arg0 ;


@end


#endif