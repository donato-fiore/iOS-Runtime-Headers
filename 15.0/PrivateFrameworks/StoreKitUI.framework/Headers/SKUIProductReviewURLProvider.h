// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTREVIEWURLPROVIDER_H
#define SKUIPRODUCTREVIEWURLPROVIDER_H

@class NSString, NSURL, SSURLBag;

#import <Foundation/Foundation.h>


@interface SKUIProductReviewURLProvider : NSObject

@property (copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (retain, nonatomic) NSURL *rateURL; // ivar: _rateURL
@property (retain, nonatomic) SSURLBag *urlBag; // ivar: _urlBag
@property (retain, nonatomic) NSURL *writeReviewURL; // ivar: _writeReviewURL


-(id)_urlByAppendingItemId:(id)arg0 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 itemID:(id)arg1 ;
-(void)fetchURLsWithCompletion:(id)arg0 ;


@end


#endif