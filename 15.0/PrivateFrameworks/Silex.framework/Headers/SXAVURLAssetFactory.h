// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAVURLASSETFACTORY_H
#define SXAVURLASSETFACTORY_H

@class NSString, NSDictionary;
@protocol SXAVURLAssetFactory;

#import <Foundation/Foundation.h>


@interface SXAVURLAssetFactory : NSObject <SXAVURLAssetFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;


-(id)createURLAssetWithURL:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;


@end


#endif