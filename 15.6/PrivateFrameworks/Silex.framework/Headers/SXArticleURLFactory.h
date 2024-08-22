// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXARTICLEURLFACTORY_H
#define SXARTICLEURLFACTORY_H

@class NSString;
@protocol SXArticleURLFactory;

#import <Foundation/Foundation.h>


@interface SXArticleURLFactory : NSObject <SXArticleURLFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createArticleURLWithIdentifier:(id)arg0 ;


@end


#endif