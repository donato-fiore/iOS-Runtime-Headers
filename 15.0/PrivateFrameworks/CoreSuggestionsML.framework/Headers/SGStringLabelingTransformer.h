// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTRINGLABELINGTRANSFORMER_H
#define SGSTRINGLABELINGTRANSFORMER_H

@class NSDictionary, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGStringLabelingTransformer : NSObject <PMLTransformerProtocol>

 {
    NSDictionary *_labelMapping;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)convertLabelsToMapping:(id)arg0 ;
+(id)withLabelStrings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStringLabelingTransformer:(id)arg0 ;
-(id)initWithLabelMapping:(id)arg0 ;
-(id)initWithLabelStrings:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif