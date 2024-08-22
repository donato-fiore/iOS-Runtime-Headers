// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSNEWSREFERRALITEMWIDGETARTICLELIST_H
#define TSNEWSREFERRALITEMWIDGETARTICLELIST_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSNewsReferralItemWidgetArticleList : NSObject {
    ? JSONArray;
    ? flintDocumentURLAssetHandlesByRemoteURL;
}


@property (nonatomic, readonly) NSArray *JSONArray;
@property (nonatomic, readonly) NSDictionary *flintDocumentURLAssetHandlesByRemoteURL;


-(id)init;
-(id)initWithJSONArray:(id)arg0 flintDocumentURLAssetHandlesByRemoteURL:(id)arg1 ;


@end


#endif