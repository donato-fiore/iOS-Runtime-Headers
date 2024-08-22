// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSTOCKLINKPRESENTATIONSOURCE_H
#define SUSTOCKLINKPRESENTATIONSOURCE_H

@class NSString, LPImage, NSURL;
@protocol UIActivityItemLinkPresentationSource;

#import <Foundation/Foundation.h>


@interface SUStockLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LPImage *linkPresentationImage; // ivar: _linkPresentationImage
@property (readonly, nonatomic) NSString *stockName; // ivar: _stockName
@property (readonly, nonatomic) NSString *stockSymbol; // ivar: _stockSymbol
@property (readonly, nonatomic) NSURL *stockURL; // ivar: _stockURL
@property (readonly) Class superclass;


-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)initWithStockSymbol:(id)arg0 name:(id)arg1 url:(id)arg2 ;


@end


#endif