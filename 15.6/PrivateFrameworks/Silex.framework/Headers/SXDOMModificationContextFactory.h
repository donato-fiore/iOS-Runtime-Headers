// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDOMMODIFICATIONCONTEXTFACTORY_H
#define SXDOMMODIFICATIONCONTEXTFACTORY_H

@class NSString;
@protocol SXDOMModificationContextFactory, SXDocumentProviding;

#import <Foundation/Foundation.h>


@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createModificationContextWithLayoutOptions:(id)arg0 ;
-(id)initWithDocumentProvider:(id)arg0 ;


@end


#endif