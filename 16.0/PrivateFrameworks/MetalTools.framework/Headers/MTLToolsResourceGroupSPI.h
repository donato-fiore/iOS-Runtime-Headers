// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSRESOURCEGROUPSPI_H
#define MTLTOOLSRESOURCEGROUPSPI_H

@class NSString;
@protocol MTLResourceGroupSPI;


#import "MTLToolsObject.h"

@interface MTLToolsResourceGroupSPI : MTLToolsObject <MTLResourceGroupSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsResource:(id)arg0 ;


@end


#endif