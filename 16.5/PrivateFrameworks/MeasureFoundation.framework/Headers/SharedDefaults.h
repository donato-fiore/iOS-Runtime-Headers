// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAREDDEFAULTS_H
#define SHAREDDEFAULTS_H


#import <Foundation/Foundation.h>


@interface SharedDefaults : NSObject

@property NSInteger cachedMeasureUnits; // ivar: _cachedMeasureUnits


+(NSInteger)currentMeasureUnits;
+(id)defaults;
+(id)getDefaultValues;
+(id)measureUnits;
+(void)setupSpecifier:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif