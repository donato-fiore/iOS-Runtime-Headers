// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCWEBCLIPPAYLOAD_H
#define MCWEBCLIPPAYLOAD_H

@class NSURL, NSString, NSNumber, NSData;


#import "MCPayload.h"

@interface MCWebClipPayload : MCPayload

@property (readonly, retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *contentMode; // ivar: _contentMode
@property (readonly, nonatomic) BOOL fullScreen; // ivar: _fullScreen
@property (readonly, nonatomic) NSNumber *fullScreenNum; // ivar: _fullScreenNum
@property (readonly, retain, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) BOOL ignoreManifestScope; // ivar: _ignoreManifestScope
@property (readonly, nonatomic) NSNumber *ignoreManifestScopeNum; // ivar: _ignoreManifestScopeNum
@property (readonly, nonatomic) BOOL isRemovable; // ivar: _isRemovable
@property (readonly, nonatomic) NSNumber *isRemovableNum; // ivar: _isRemovableNum
@property (readonly, retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) BOOL precomposed; // ivar: _precomposed
@property (readonly, nonatomic) NSNumber *precomposedNum; // ivar: _precomposedNum
@property (retain, nonatomic) NSString *savedIdentifier; // ivar: _savedIdentifier
@property (retain, nonatomic) NSString *targetApplicationBundleIdentifier; // ivar: _targetApplicationBundleIdentifier


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)title;
-(id)verboseDescription;


@end


#endif