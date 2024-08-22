// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPMAPSNIPPETTEMPLATE_H
#define SAINTENTGROUPMAPSNIPPETTEMPLATE_H

@class NSString;
@protocol SAIntentGroupSetMapLocation;


#import "SAIntentGroupSnippetTemplate.h"
#import "SAUIColor.h"
#import "SAIntentGroupDetailLabelTemplateComponent.h"
#import "SALocation.h"

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (retain, nonatomic) SAUIColor *color;
@property (retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property (nonatomic) BOOL interactive;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mapSize;
@property (retain, nonatomic) NSObject<SAIntentGroupSetMapLocation> *updateLocationCommand;


+(id)mapSnippetTemplate;
+(id)mapSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif