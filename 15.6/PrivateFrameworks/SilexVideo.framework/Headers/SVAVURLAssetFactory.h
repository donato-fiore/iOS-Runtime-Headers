// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVAVURLASSETFACTORY_H
#define SVAVURLASSETFACTORY_H

@class NSString, NSDictionary;
@protocol SVAVURLAssetFactory;

#import <Foundation/Foundation.h>


@interface SVAVURLAssetFactory : NSObject <SVAVURLAssetFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;


-(id)createURLAssetWithURL:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;


@end


#endif