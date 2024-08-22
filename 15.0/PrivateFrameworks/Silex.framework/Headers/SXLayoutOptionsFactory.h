// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLAYOUTOPTIONSFACTORY_H
#define SXLAYOUTOPTIONSFACTORY_H

@class NSString;
@protocol SXLayoutOptionsFactory;

#import <Foundation/Foundation.h>

#import "SXColumnCalculator.h"
#import "SXDocumentProvider.h"

@interface SXLayoutOptionsFactory : NSObject <SXLayoutOptionsFactory>



@property (readonly, nonatomic) SXColumnCalculator *columnCalculator; // ivar: _columnCalculator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocumentProvider *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLayoutOptionsWithViewportSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 traitCollection:(id)arg2 bundleSubscriptionStatus:(NSInteger)arg3 channelSubscriptionStatus:(NSInteger)arg4 contentSizeCategory:(id)arg5 testing:(BOOL)arg6 viewingLocation:(NSUInteger)arg7 contentScaleFactor:(CGFloat)arg8 newsletterSubscriptionStatus:(NSUInteger)arg9 ;
-(id)initWithColumnCalculator:(id)arg0 documentProvider:(id)arg1 ;


@end


#endif