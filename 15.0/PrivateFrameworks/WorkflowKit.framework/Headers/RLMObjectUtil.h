// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMOBJECTUTIL_H
#define RLMOBJECTUTIL_H


#import <Foundation/Foundation.h>


@interface RLMObjectUtil : NSObject



+(id)getOptionalProperties:(id)arg0 ;
+(id)getSwiftProperties:(id)arg0 ;
+(id)ignoredPropertiesForClass:(Class)arg0 ;
+(id)indexedPropertiesForClass:(Class)arg0 ;
+(id)linkingObjectProperties:(id)arg0 ;
+(id)linkingObjectsPropertiesForClass:(Class)arg0 ;
+(id)requiredPropertiesForClass:(Class)arg0 ;


@end


#endif