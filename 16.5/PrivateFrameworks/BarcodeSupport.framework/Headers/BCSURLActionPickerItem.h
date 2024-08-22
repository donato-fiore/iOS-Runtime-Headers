// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSURLACTIONPICKERITEM_H
#define BCSURLACTIONPICKERITEM_H

@class NSURL, LSApplicationRecord, LSAppLink;
@protocol BCSCodePayload;


#import "BCSActionPickerItem.h"

@interface BCSURLActionPickerItem : BCSActionPickerItem {
    NSURL *_url;
    LSApplicationRecord *_applicationRecord;
    BOOL _preferApplicationIcon;
}


@property (readonly, nonatomic) LSAppLink *appLink; // ivar: _appLink
@property (readonly, nonatomic) NSObject<BCSCodePayload> *codePayload; // ivar: _codePayload


-(BOOL)useInlineMenu;
-(id)actionURL;
-(id)icon;
-(id)initWithLabel:(id)arg0 action:(id)arg1 appLink:(id)arg2 codePayload:(id)arg3 ;
-(id)initWithLabel:(id)arg0 action:(id)arg1 appLink:(id)arg2 codePayload:(id)arg3 preferApplicationIcon:(BOOL)arg4 ;
-(id)initWithLabel:(id)arg0 action:(id)arg1 url:(id)arg2 applicationRecord:(id)arg3 ;
-(id)initWithLabel:(id)arg0 action:(id)arg1 url:(id)arg2 applicationRecord:(id)arg3 preferApplicationIcon:(BOOL)arg4 ;
-(id)targetApplicationBundleIdentifier;
-(void)performAction;
-(void)performActionWithFBOptions:(id)arg0 ;


@end


#endif