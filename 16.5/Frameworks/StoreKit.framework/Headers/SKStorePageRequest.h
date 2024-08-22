// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTOREPAGEREQUEST_H
#define SKSTOREPAGEREQUEST_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface SKStorePageRequest : NSObject

@property (nonatomic) NSInteger productPageStyle; // ivar: _pageStyle
@property (copy, nonatomic) NSDictionary *productParameters; // ivar: _productParameters
@property (copy, nonatomic) NSURL *productURL; // ivar: _productURL


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif