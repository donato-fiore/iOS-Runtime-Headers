// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCARTICLEDOWNLOADSERVICE_H
#define FCARTICLEDOWNLOADSERVICE_H

@protocol FCArticleDownloadServiceType, FCContentContext, FCFlintHelper;

#import <Foundation/Foundation.h>


@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType>



@property (readonly, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (readonly, nonatomic) NSObject<FCFlintHelper> *flintHelper; // ivar: _flintHelper


-(id)downloadArticleWithID:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchCachedArticleWithID:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg0 flintHelper:(id)arg1 ;


@end


#endif