// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCESIMPLETEXTURESTORAGE_H
#define BWINFERENCESIMPLETEXTURESTORAGE_H

@class NSMapTable, NSString;
@protocol BWInferenceTextureStorage;

#import <Foundation/Foundation.h>


@interface BWInferenceSimpleTextureStorage : NSObject <BWInferenceTextureStorage>

 {
    NSMapTable *_entriesByRequirement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(struct ? *)entryForRequirement:(id)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)setEntry:(struct ? *)arg0 forRequirement:(id)arg1 ;
-(void)setTexture:(id)arg0 forRequirement:(id)arg1 ;


@end


#endif