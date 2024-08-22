// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCICONPROMISE_H
#define DOCICONPROMISE_H

@class UIImage, NSString;
@protocol DOCThumbnail;

#import <Foundation/Foundation.h>

#import "DOCThumbnailRequest.h"

@interface DOCIconPromise : NSObject <DOCThumbnail>

 {
    UIImage *_icon;
    DOCThumbnailRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRepresentativeIcon;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *thumbnail;


-(BOOL)registerGenerationCompletionHandler:(id)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)scheduleUpdateIfNeeded;


@end


#endif