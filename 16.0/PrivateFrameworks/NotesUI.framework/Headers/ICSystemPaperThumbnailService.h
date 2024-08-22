// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERTHUMBNAILSERVICE_H
#define ICSYSTEMPAPERTHUMBNAILSERVICE_H


#import <Foundation/Foundation.h>

#import "ICSystemPaperThumbnailServiceInternal.h"

@interface ICSystemPaperThumbnailService : NSObject

@property (retain, nonatomic) ICSystemPaperThumbnailServiceInternal *systemPaperThumbnailService; // ivar: _systemPaperThumbnailService


+(id)sharedService;
-(id)initWithSystemPaperThumbnailService:(id)arg0 ;
-(void)cancel;
-(void)invalidate;
-(void)invalidateForNote:(id)arg0 ;
-(void)observe;
-(void)updateIfNeededForNote:(id)arg0 completion:(id)arg1 ;
-(void)updateIfNeededWithCompletion:(id)arg0 ;


@end


#endif