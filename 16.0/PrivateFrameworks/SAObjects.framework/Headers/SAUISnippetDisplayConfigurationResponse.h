// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISNIPPETDISPLAYCONFIGURATIONRESPONSE_H
#define SAUISNIPPETDISPLAYCONFIGURATIONRESPONSE_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAUISize.h"

@interface SAUISnippetDisplayConfigurationResponse : SABaseCommand <SAServerBoundCommand>



@property (nonatomic) BOOL accessibilityDifferentiateWithoutColor;
@property (nonatomic) BOOL accessibilityInvertColors;
@property (nonatomic) BOOL accessibilityReduceMotion;
@property (nonatomic) BOOL accessibilityReduceTransparency;
@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayColorScheme;
@property (copy, nonatomic) NSString *displayContrast;
@property (copy, nonatomic) NSString *displayGamut;
@property (copy, nonatomic) NSString *dynamicTypeSize;
@property (retain, nonatomic) SAUISize *estimatedVisibleSnippetDisplaySize;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textDirection;
@property (copy, nonatomic) NSString *textLegibilityWeight;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif