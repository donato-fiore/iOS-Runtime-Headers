// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUXSTORYUISWIFTFACTORY_H
#define PUXSTORYUISWIFTFACTORY_H

@class NSString;
@protocol PXStoryUISwiftFactory;

#import <Foundation/Foundation.h>


@interface PUXStoryUISwiftFactory : NSObject <PXStoryUISwiftFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)flexMusicViewController;
+(id)thumbnailActionPerformerWithModel:(id)arg0 ;
+(id)viewControllerWithConfiguration:(id)arg0 contentViewController:(*id)arg1 ;


@end


#endif