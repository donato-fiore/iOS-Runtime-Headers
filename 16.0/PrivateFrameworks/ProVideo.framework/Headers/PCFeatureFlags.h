// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCFEATUREFLAGS_H
#define PCFEATUREFLAGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PCFeatureFlags : NSObject {
    NSDictionary *_features;
}




+(BOOL)checkFeature:(id)arg0 ;
+(id)sharedInstance;
+(void)overwriteFeatureFlags:(id)arg0 ;
+(void)setAllFeatureFlags:(id)arg0 ;
-(BOOL)checkFeature:(id)arg0 ;
-(void)dealloc;
-(void)overwriteFeatureFlags:(id)arg0 ;
-(void)setAllFeatureFlags:(id)arg0 ;


@end


#endif