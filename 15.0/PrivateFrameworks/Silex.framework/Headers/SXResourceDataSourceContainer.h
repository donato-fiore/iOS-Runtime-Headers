// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXRESOURCEDATASOURCECONTAINER_H
#define SXRESOURCEDATASOURCECONTAINER_H

@class NSString;
@protocol SXResourceDataSourceContainer, SXResourceDataSource;

#import <Foundation/Foundation.h>


@interface SXResourceDataSourceContainer : NSObject <SXResourceDataSourceContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXResourceDataSource> *resourceDataSource; // ivar: _resourceDataSource
@property (readonly) Class superclass;


-(void)registerResourceDataSource:(id)arg0 ;


@end


#endif