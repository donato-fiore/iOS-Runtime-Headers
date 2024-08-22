// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXQUICKLOOKRENDERER_H
#define SXQUICKLOOKRENDERER_H

@class NSString;
@protocol SXQuickLookRenderer, SXQuickLookStyler;

#import <Foundation/Foundation.h>


@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXQuickLookStyler> *styler; // ivar: _styler
@property (readonly) Class superclass;


-(id)initWithStyler:(id)arg0 ;
-(void)render:(id)arg0 attributes:(id)arg1 ;
-(void)renderErrorMessage:(id)arg0 view:(id)arg1 ;
-(void)renderThumbnailImage:(id)arg0 view:(id)arg1 ;


@end


#endif