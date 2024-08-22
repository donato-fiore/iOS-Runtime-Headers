// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARACCESSORYVIEW_H
#define CNAVATARACCESSORYVIEW_H

@class NSString, NSData;
@protocol CNAvatarAccessoryView;

#import <Foundation/Foundation.h>


@interface CNAvatarAccessoryView : NSObject <CNAvatarAccessoryView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly) Class superclass;


+(id)badgeWithSystemImageNamed:(id)arg0 ;
+(id)mediaContextBadgeWithImageData:(id)arg0 ;


@end


#endif