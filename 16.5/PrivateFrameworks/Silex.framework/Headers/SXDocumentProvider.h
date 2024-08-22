// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOCUMENTPROVIDER_H
#define SXDOCUMENTPROVIDER_H

@class NSString;
@protocol SXDocumentProviding;

#import <Foundation/Foundation.h>

#import "SXDocument.h"

@interface SXDocumentProvider : NSObject <SXDocumentProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif