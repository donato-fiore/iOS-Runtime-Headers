// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXVIDEOCOMPONENT_H
#define SXVIDEOCOMPONENT_H

@class NSString;
@protocol SXComponentAdvertisingMetadataProviding;


#import "SXComponent.h"
#import "SXJSONDictionary.h"

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>



@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) SXJSONDictionary *advertising;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePreroll;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *prerollPlacementIdentifier;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSString *stillImageIdentifier;
@property (readonly) Class superclass;


+(id)typeString;
-(BOOL)enablePrerollWithValue:(id)arg0 withType:(int)arg1 ;
-(CGFloat)aspectRatioWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)traits;
-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;


@end


#endif