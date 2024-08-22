// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTEXTITEMTRANSFORMER_H
#define QLTEXTITEMTRANSFORMER_H

@class NSString;
@protocol QLItemTransformerProtocol;

#import <Foundation/Foundation.h>


@interface QLTextItemTransformer : NSObject <QLItemTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedOutputClasses;
+(id)attributedStringFromData:(id)arg0 encoding:(NSUInteger)arg1 typeIdentifier:(id)arg2 error:(*id)arg3 ;
+(id)wrapperFromData:(id)arg0 encoding:(NSUInteger)arg1 typeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)transformedContentsFromData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)transformedContentsFromURL:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif