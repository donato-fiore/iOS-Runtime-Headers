// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCWEBCONTENTFILTERPAYLOAD_H
#define MCWEBCONTENTFILTERPAYLOAD_H

@class NSArray, NSString, NSDictionary;


#import "MCPayload.h"

@interface MCWebContentFilterPayload : MCPayload

@property (retain, nonatomic) NSArray *allowListBookmarks; // ivar: _allowListBookmarks
@property (nonatomic) BOOL autoFilterEnabled; // ivar: _autoFilterEnabled
@property (retain, nonatomic) NSString *contentFilterUUID; // ivar: _contentFilterUUID
@property (retain, nonatomic) NSArray *denyListURLStrings; // ivar: _denyListURLStrings
@property (nonatomic) BOOL filterBrowsers; // ivar: _filterBrowsers
@property (nonatomic) BOOL filterSockets; // ivar: _filterSockets
@property (copy, nonatomic) NSString *filterType; // ivar: _filterType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *permittedURLStrings; // ivar: _permittedURLStrings
@property (copy, nonatomic) NSString *pluginBundleID; // ivar: _pluginBundleID
@property (retain, nonatomic) NSDictionary *pluginConfiguration; // ivar: _pluginConfiguration


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)pluginFilterKeysAndClasses;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
-(id)verboseDescription;


@end


#endif