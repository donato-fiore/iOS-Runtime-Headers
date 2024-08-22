// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISBUNDLERESOURCEPROVIDER_H
#define ISBUNDLERESOURCEPROVIDER_H

@class NSURL, NSDictionary, NSString;


#import "ISResourceProvider.h"

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL; // ivar: _bundleURL
@property (retain) NSDictionary *iconDictionary; // ivar: _iconDictionary
@property NSUInteger options;
@property (retain) NSString *templateType; // ivar: _templateType


-(BOOL)_isAppleResource;
-(NSUInteger)iconShape;
-(id)customRecipe;
-(id)iconResource;
-(id)initWithBundle:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithBundleURL:(id)arg0 iconDictionary:(id)arg1 options:(NSUInteger)arg2 ;
-(id)resourceNamed:(id)arg0 ;
-(id)symbol;
-(void)resolveResources;


@end


#endif