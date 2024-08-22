// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXQUICKLOOKSERVICE_H
#define SXQUICKLOOKSERVICE_H

@class NSString, QLThumbnailGenerator;
@protocol SXQuickLookService;

#import <Foundation/Foundation.h>


@interface SXQuickLookService : NSObject <SXQuickLookService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) QLThumbnailGenerator *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
// -(void)fetchThumbnailForFile:(id)arg0 size:(struct CGSize )arg1 onCompletion:(id)arg2 onError:(unk)arg3  ;


@end


#endif