// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLAYOUTCONTEXT_H
#define SXLAYOUTCONTEXT_H

@class NSString;
@protocol SXLayoutContext;

#import <Foundation/Foundation.h>

#import "SXColumnLayout.h"
#import "SXUnitConverter.h"

@interface SXLayoutContext : NSObject <SXLayoutContext>



@property (readonly, nonatomic) SXColumnLayout *columnLayout; // ivar: _columnLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXUnitConverter *unitConverter; // ivar: _unitConverter


-(id)initWithColumnLayout:(id)arg0 unitConverter:(id)arg1 ;


@end


#endif