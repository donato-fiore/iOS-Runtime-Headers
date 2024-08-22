// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSUGGESTEDARTICLESPLACEMENTTYPE_H
#define SXSUGGESTEDARTICLESPLACEMENTTYPE_H

@class NSString;
@protocol SXSuggestedArticlesPlacementType, SXAutoPlacementLayout;


#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXSuggestedArticlesPlacementType : SXJSONObject <SXSuggestedArticlesPlacementType>



@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAutoPlacementLayout> *layout;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger theme;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)themeWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif