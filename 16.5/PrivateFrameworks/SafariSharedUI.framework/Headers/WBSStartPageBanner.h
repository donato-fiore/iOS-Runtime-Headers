// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSTARTPAGEBANNER_H
#define WBSSTARTPAGEBANNER_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface WBSStartPageBanner : NSObject

@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSInteger contentVariant; // ivar: _contentVariant
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger numberOfTrackers; // ivar: _numberOfTrackers
@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled; // ivar: _privateBrowsingEnabled
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(id)bannerWithImage:(id)arg0 title:(id)arg1 message:(id)arg2 interactive:(BOOL)arg3 dismissHandler:(id)arg4 ;
+(id)bannerWithTitle:(id)arg0 message:(id)arg1 dismissHandler:(id)arg2 ;
+(id)privacyReportBannerWithNumberOfTrackers:(NSInteger)arg0 privateBrowsingEnabled:(BOOL)arg1 selectionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithContentVariant:(NSInteger)arg0 action:(id)arg1 ;


@end


#endif