// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSXPCCODINGARRAY_H
#define RBSXPCCODINGARRAY_H

@class NSArray, NSString;
@protocol NSFastEnumeration, RBSXPCCoding;

#import <Foundation/Foundation.h>


@interface RBSXPCCodingArray : NSObject <NSFastEnumeration, RBSXPCCoding>

 {
    NSArray *_array;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif