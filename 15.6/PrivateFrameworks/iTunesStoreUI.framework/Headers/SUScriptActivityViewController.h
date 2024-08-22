// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTACTIVITYVIEWCONTROLLER_H
#define SUSCRIPTACTIVITYVIEWCONTROLLER_H

@class NSArray, NSString;


#import "SUScriptViewController.h"

@interface SUScriptActivityViewController : SUScriptViewController {
    NSArray *_applicationActivities;
    NSArray *_providers;
}


@property (readonly) NSString *activityTypeAddToReadingList;
@property (readonly) NSString *activityTypeAssignToContact;
@property (readonly) NSString *activityTypeCopyToPasteboard;
@property (readonly) NSString *activityTypeMail;
@property (readonly) NSString *activityTypeMessage;
@property (readonly) NSString *activityTypePostToFacebook;
@property (readonly) NSString *activityTypePostToFlickr;
@property (readonly) NSString *activityTypePostToTwitter;
@property (readonly) NSString *activityTypePostToVimeo;
@property (readonly) NSString *activityTypePostToWeibo;
@property (readonly) NSString *activityTypePrint;
@property (readonly) NSString *activityTypeSaveToCameraRoll;
@property (copy) id *excludedActivityTypes;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithScriptItemProviders:(id)arg0 applicationActivities:(id)arg1 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)setTitle:(id)arg0 forActivityType:(id)arg1 ;


@end


#endif