// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTLOCATIONLISTITEM_H
#define SASTLOCATIONLISTITEM_H

@class NSString;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SASTTemplateStarRating.h"

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAUIDecoratedText *formattedDistance;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASTTemplateStarRating *rating;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;


+(id)locationListItem;
+(id)locationListItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif