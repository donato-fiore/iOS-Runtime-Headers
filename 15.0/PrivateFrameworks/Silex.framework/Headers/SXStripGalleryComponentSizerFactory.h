// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSTRIPGALLERYCOMPONENTSIZERFACTORY_H
#define SXSTRIPGALLERYCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory;

#import <Foundation/Foundation.h>


@interface SXStripGalleryComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif