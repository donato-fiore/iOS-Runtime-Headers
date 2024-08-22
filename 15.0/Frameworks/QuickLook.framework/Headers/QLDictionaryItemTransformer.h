// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLDICTIONARYITEMTRANSFORMER_H
#define QLDICTIONARYITEMTRANSFORMER_H

@class NSString;
@protocol QLItemTransformerProtocol;

#import <Foundation/Foundation.h>


@interface QLDictionaryItemTransformer : NSObject <QLItemTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedOutputClasses;
-(id)transformedContentsFromData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)transformedContentsFromURL:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif