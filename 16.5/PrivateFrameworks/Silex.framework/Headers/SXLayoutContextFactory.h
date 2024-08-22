// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTCONTEXTFACTORY_H
#define SXLAYOUTCONTEXTFACTORY_H

@class NSString;
@protocol SXLayoutContextFactory;

#import <Foundation/Foundation.h>


@interface SXLayoutContextFactory : NSObject <SXLayoutContextFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLayoutContextForColumnLayout:(id)arg0 unitConverter:(id)arg1 ;


@end


#endif