// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACTIVITYITEMSOURCE_H
#define PKACTIVITYITEMSOURCE_H

@class NSString, NSURL, UIImage, LPImage;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>


@interface PKActivityItemSource : NSObject <UIActivityItemSource>

 {
    NSString *_title;
    NSString *_subtitle;
    NSURL *_iconURL;
    UIImage *_iconImage;
    LPImage *_icon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value; // ivar: _value


+(id)actionableItemWithValue:(id)arg0 ;
+(id)placeholderURLItemWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
+(id)placeholderURLItemWithTitle:(id)arg0 subtitle:(id)arg1 iconURL:(id)arg2 iconPlaceholder:(id)arg3 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 value:(id)arg3 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 iconURL:(id)arg2 iconPlaceholder:(id)arg3 value:(id)arg4 ;


@end


#endif