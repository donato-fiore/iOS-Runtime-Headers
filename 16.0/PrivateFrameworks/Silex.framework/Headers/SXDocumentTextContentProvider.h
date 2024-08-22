// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDOCUMENTTEXTCONTENTPROVIDER_H
#define SXDOCUMENTTEXTCONTENTPROVIDER_H

@class NSString;
@protocol SXTextContentProvider;

#import <Foundation/Foundation.h>

#import "SXDocument.h"

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedQueue;
-(BOOL)classification:(id)arg0 isValidForType:(NSUInteger)arg1 ;
-(BOOL)contentRelevance:(NSUInteger)arg0 isValidForType:(NSUInteger)arg1 ;
-(id)initWithDocument:(id)arg0 ;
-(id)textContentForComponent:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)textContentForComponents:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)textContentForType:(NSUInteger)arg0 onCompletion:(id)arg1 ;


@end


#endif