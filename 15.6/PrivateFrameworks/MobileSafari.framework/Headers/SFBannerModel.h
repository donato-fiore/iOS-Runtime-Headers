// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBANNERMODEL_H
#define SFBANNERMODEL_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface SFBannerModel : NSObject

@property (readonly, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSInteger contentVariant; // ivar: _contentVariant
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger numberOfTrackers; // ivar: _numberOfTrackers
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(id)bannerWithImage:(id)arg0 title:(id)arg1 message:(id)arg2 dismissHandler:(id)arg3 ;
+(id)bannerWithTitle:(id)arg0 message:(id)arg1 dismissHandler:(id)arg2 ;
+(id)privacyReportBannerWithNumberOfTrackers:(NSInteger)arg0 selectionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithContentVariant:(NSInteger)arg0 action:(id)arg1 ;


@end


#endif