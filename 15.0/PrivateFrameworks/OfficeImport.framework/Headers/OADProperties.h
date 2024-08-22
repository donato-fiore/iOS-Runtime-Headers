// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADPROPERTIES_H
#define OADPROPERTIES_H


#import <Foundation/Foundation.h>

#import "OADProperties.h"

@interface OADProperties : NSObject {
    OADProperties *mParent;
    BOOL mIsMerged;
    BOOL mIsMergedWithParent;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMerged;
-(BOOL)isMergedPropertyForSelector:(SEL)arg0 ;
-(BOOL)isMergedWithParent;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithDefaults;
-(id)overrideForSelector:(SEL)arg0 ;
-(id)overrideForSelector:(SEL)arg0 mustExist:(BOOL)arg1 ;
-(id)parent;
-(id)possiblyInexistentOverrideForSelector:(SEL)arg0 ;
-(void)changeParentPreservingEffectiveValues:(id)arg0 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)flatten;
-(void)p_setParent:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setMerged:(BOOL)arg0 ;
-(void)setMergedWithParent:(BOOL)arg0 ;
-(void)setParent:(id)arg0 ;


@end


#endif