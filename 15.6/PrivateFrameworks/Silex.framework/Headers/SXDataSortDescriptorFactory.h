// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATASORTDESCRIPTORFACTORY_H
#define SXDATASORTDESCRIPTORFACTORY_H

@class NSString;
@protocol SXDataSortDescriptorFactory;

#import <Foundation/Foundation.h>


@interface SXDataSortDescriptorFactory : NSObject <SXDataSortDescriptorFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)sortDescriptorForDataDescriptor:(id)arg0 ascending:(BOOL)arg1 ;


@end


#endif