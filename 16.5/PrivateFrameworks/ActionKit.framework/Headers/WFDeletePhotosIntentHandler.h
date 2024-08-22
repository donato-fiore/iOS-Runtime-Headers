// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDELETEPHOTOSINTENTHANDLER_H
#define WFDELETEPHOTOSINTENTHANDLER_H

@class NSString;
@protocol WFDeletePhotosIntentHandling;

#import <Foundation/Foundation.h>


@interface WFDeletePhotosIntentHandler : NSObject <WFDeletePhotosIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleDeletePhotos:(id)arg0 completion:(id)arg1 ;


@end


#endif