// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITEMPLATELOADER_H
#define SKUITEMPLATELOADER_H

@class NSArray, NSMutableArray, NSOperationQueue, NSRegularExpression, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SKUITemplateLoader.h"

@interface SKUITemplateLoader : NSObject {
    SKUITemplateLoader *_retainSelf;
}


@property (readonly, copy, nonatomic) NSArray *URLs; // ivar: _URLs
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSMutableArray *errors; // ivar: _errors
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) NSInteger pendingOperationCount; // ivar: _pendingOperationCount
@property (readonly, nonatomic) NSRegularExpression *templateParsingRegularExpression; // ivar: _templateParsingRegularExpression
@property (readonly, nonatomic) NSMutableDictionary *templateStrings; // ivar: _templateStrings


-(id)_operationWithURL:(id)arg0 ;
-(id)initWithURLs:(id)arg0 completionBlock:(id)arg1 ;
-(void)_operation:(id)arg0 didCompleteWithOutput:(id)arg1 ;
-(void)_operation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_operationDidFinish:(id)arg0 ;
-(void)load;


@end


#endif