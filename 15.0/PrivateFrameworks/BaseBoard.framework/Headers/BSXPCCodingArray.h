// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSXPCCODINGARRAY_H
#define BSXPCCODINGARRAY_H

@class NSArray, NSString;
@protocol NSFastEnumeration, BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSXPCCodingArray : NSObject <NSFastEnumeration, BSXPCCoding, BSDescriptionProviding>

 {
    NSArray *_array;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif