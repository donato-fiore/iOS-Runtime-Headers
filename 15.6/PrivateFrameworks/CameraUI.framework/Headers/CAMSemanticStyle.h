// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSEMANTICSTYLE_H
#define CAMSEMANTICSTYLE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CAMSemanticStyle : NSObject

@property (readonly, nonatomic, getter=isCustomizable) BOOL customizable;
@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger makerPreset;
@property (readonly, nonatomic, getter=isNeutral) BOOL neutral;
@property (readonly, copy, nonatomic) NSString *presetDisplayName;
@property (readonly, nonatomic) NSInteger presetType; // ivar: _presetType
@property (readonly, nonatomic) CGFloat sceneBias; // ivar: _sceneBias
@property (readonly, nonatomic) CGFloat subjectBias; // ivar: _subjectBias
@property (readonly, nonatomic) CGFloat warmthBias; // ivar: _warmthBias


+(id)defaultStyles;
+(id)persistenceStringForPresetType:(NSInteger)arg0 ;
+(id)styleWithDictionary:(id)arg0 error:(*id)arg1 ;
+(void)getSceneBias:(*CGFloat)arg0 warmthBias:(*CGFloat)arg1 forPresetType:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSemanticStyle:(id)arg0 ;
-(NSInteger)_makerPresetWithSceneBias:(CGFloat)arg0 warmthBias:(CGFloat)arg1 ;
-(id)description;
-(id)initWithPresetType:(NSInteger)arg0 ;
-(id)initWithPresetType:(NSInteger)arg0 subjectBias:(CGFloat)arg1 sceneBias:(CGFloat)arg2 warmthBias:(CGFloat)arg3 ;


@end


#endif