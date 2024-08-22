// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDDICTIONARYFEATUREPROVIDER_H
#define AMDDICTIONARYFEATUREPROVIDER_H

@class NSString, NSMutableDictionary;
@protocol AMDFeatureProvider;

#import <Foundation/Foundation.h>


@interface AMDDictionaryFeatureProvider : NSObject <AMDFeatureProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getFeatureWithName:(id)arg0 ;
-(id)init;
-(void)addFeature:(id)arg0 withName:(id)arg1 ;


@end


#endif