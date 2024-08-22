// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCWEBCONTENT_H
#define FCWEBCONTENT_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "FCAssetHandle.h"

@interface FCWebContent : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) FCAssetHandle *excerptAssetHandle; // ivar: _excerptAssetHandle
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


-(id)init;
-(id)initWithArticleID:(id)arg0 sourceURL:(id)arg1 excerptAssetHandle:(id)arg2 ;


@end


#endif