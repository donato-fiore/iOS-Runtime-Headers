// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTRANSITIONDATASOURCEPROVIDER_H
#define SXTRANSITIONDATASOURCEPROVIDER_H

@class NSString, UIScrollView;
@protocol SXTransitionDataSourceProvider, SXComponentController, SXDocumentMetadataProviding;

#import <Foundation/Foundation.h>

#import "SXTransitionDataSourceNode.h"

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider>



@property (readonly, nonatomic) NSObject<SXComponentController> *componentController; // ivar: _componentController
@property (retain, nonatomic) SXTransitionDataSourceNode *currentNode; // ivar: _currentNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentMetadataProviding> *documentMetadataProvider; // ivar: _documentMetadataProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(id)initWithComponentController:(id)arg0 scrollView:(id)arg1 documentMetadataProvider:(id)arg2 ;
-(id)transitionDataSourceForType:(NSUInteger)arg0 ;


@end


#endif