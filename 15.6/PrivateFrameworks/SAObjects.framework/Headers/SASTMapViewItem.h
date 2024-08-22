// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTMAPVIEWITEM_H
#define SASTMAPVIEWITEM_H

@class NSString, NSDate, NSNumber;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SALocation.h"

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SALocation *location;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *zoomLevel;


+(id)mapViewItem;
+(id)mapViewItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif