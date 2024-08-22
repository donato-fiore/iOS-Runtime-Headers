// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDOMFACTORY_H
#define SXDOMFACTORY_H

@class NSString;
@protocol SXDOMFactory, SXDocumentProviding;

#import <Foundation/Foundation.h>


@interface SXDOMFactory : NSObject <SXDOMFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentProviding> *documentProvider; // ivar: _documentProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDOM;
-(id)initWithDocumentProvider:(id)arg0 ;


@end


#endif