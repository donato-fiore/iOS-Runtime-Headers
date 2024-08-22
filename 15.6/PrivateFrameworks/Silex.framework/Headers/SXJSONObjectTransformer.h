// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONOBJECTTRANSFORMER_H
#define SXJSONOBJECTTRANSFORMER_H

@class NSString;
@protocol SXJSONObjectTransforming;

#import <Foundation/Foundation.h>


@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming>



@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly) Class superclass;


+(id)concatenatingTransformerWithKey:(id)arg0 ;
+(id)mergingTransformerWithKey:(id)arg0 ;
+(id)transformerWithKey:(id)arg0 block:(id)arg1 ;
-(id)transformKey:(id)arg0 ;
-(id)transformObject:(id)arg0 otherObject:(id)arg1 ;


@end


#endif