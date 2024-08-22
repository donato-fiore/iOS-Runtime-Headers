// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKDOCUMENTROOTLOGCONTEXT_H
#define TSKDOCUMENTROOTLOGCONTEXT_H

@class NSString;
@protocol TSULogContext;

#import <Foundation/Foundation.h>

#import "TSKDocumentRoot.h"

@interface TSKDocumentRootLogContext : NSObject <TSULogContext>

 {
    TSKDocumentRoot *_documentRoot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;


-(id)initWithDocumentRoot:(id)arg0 ;


@end


#endif