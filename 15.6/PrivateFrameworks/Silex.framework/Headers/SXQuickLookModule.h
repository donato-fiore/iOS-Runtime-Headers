// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXQUICKLOOKMODULE_H
#define SXQUICKLOOKMODULE_H

@class NSString;
@protocol SXQuickLookModule, TFResolver;

#import <Foundation/Foundation.h>


@interface SXQuickLookModule : NSObject <SXQuickLookModule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFResolver> *resolver; // ivar: _resolver
@property (readonly) Class superclass;


-(id)createViewControllerWithFile:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;


@end


#endif