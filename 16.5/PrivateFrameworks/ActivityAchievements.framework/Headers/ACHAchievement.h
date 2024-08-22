// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACHIEVEMENT_H
#define ACHACHIEVEMENT_H

@class NSArray, NSString, NSDictionary, HKQuantity, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstance.h"
#import "ACHTemplate.h"

@interface ACHAchievement : NSObject <NSSecureCoding>



@property ? badgeEnamelColor; // ivar: _badgeEnamelColor
@property ? badgeMetalColor; // ivar: _badgeMetalColor
@property (retain) NSArray *badgeModelFilenames; // ivar: _badgeModelFilenames
@property NSInteger badgeModelVersion; // ivar: _badgeModelVersion
@property (retain) NSString *badgeShapeName; // ivar: _badgeShapeName
@property BOOL badgeUsesFullColorEnamel; // ivar: _badgeUsesFullColorEnamel
@property BOOL badgeUsesTriColorEnamel; // ivar: _badgeUsesTriColorEnamel
@property (retain) NSDictionary *customPlaceholderValues; // ivar: _customPlaceholderValues
@property NSUInteger earnedInstanceCount; // ivar: _earnedInstanceCount
@property (readonly) NSArray *earnedInstances; // ivar: _earnedInstances
@property ? enamelTriColor1; // ivar: _enamelTriColor1
@property ? enamelTriColor2; // ivar: _enamelTriColor2
@property ? enamelTriColor3; // ivar: _enamelTriColor3
@property BOOL faceHasMetalInlay; // ivar: _faceHasMetalInlay
@property CGFloat glyphPositionOffsetX; // ivar: _glyphPositionOffsetX
@property CGFloat glyphPositionOffsetY; // ivar: _glyphPositionOffsetY
@property (retain) NSString *glyphTextureFilename; // ivar: _glyphTextureFilename
@property CGFloat glyphTextureScale; // ivar: _glyphTextureScale
@property (retain) HKQuantity *goal; // ivar: _goal
@property (readonly) BOOL hasClientRequiredURLs;
@property (retain) NSURL *localizationBundleURL;
@property (retain) NSString *localizationBundleURLString; // ivar: _localizationBundleURLString
@property (retain) HKQuantity *progress; // ivar: _progress
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSString *propertyListBundleURLString; // ivar: _propertyListBundleURLString
@property (retain) ACHEarnedInstance *relevantEarnedInstance; // ivar: _relevantEarnedInstance
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSString *resourceBundleURLString; // ivar: _resourceBundleURLString
@property (copy) NSString *section; // ivar: _section
@property (retain) NSURL *stickerBundleURL;
@property (retain) NSString *stickerBundleURLString; // ivar: _stickerBundleURLString
@property (readonly) ACHTemplate *template; // ivar: _template
@property (retain) NSArray *textureFilenames; // ivar: _textureFilenames
@property (readonly) BOOL unearned;
@property BOOL unearnedUsesTwoToneEnamel; // ivar: _unearnedUsesTwoToneEnamel


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCodable:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplate:(id)arg0 earnedInstances:(id)arg1 ;
-(id)initWithTemplate:(id)arg0 relevantEarnedInstance:(id)arg1 earnedInstanceCount:(NSUInteger)arg2 ;
-(id)shallowCopyReplacingEarnedInstances:(id)arg0 ;
-(id)shallowCopyWithRelevantEarnedInstance:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif