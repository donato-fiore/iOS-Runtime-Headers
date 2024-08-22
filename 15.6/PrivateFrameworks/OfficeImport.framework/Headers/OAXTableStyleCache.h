// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXTABLESTYLECACHE_H
#define OAXTABLESTYLECACHE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OCPPackagePart.h"

@interface OAXTableStyleCache : NSObject {
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}




-(?)defaultStyleNode;
-(?)setStyleNodeforId;
-(?)styleNodeForId;
-(id)defaultStyleId;
-(id)init;
-(void)setDefaultStyleId:(id)arg0 ;
-(void)setStylesPart:(id)arg0 ;


@end


#endif