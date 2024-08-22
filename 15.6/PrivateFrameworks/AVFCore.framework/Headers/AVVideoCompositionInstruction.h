// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCOMPOSITIONINSTRUCTION_H
#define AVVIDEOCOMPOSITIONINSTRUCTION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction;

#import <Foundation/Foundation.h>

#import "AVVideoCompositionInstructionInternal.h"

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>

 {
    AVVideoCompositionInstructionInternal *_instruction;
}


@property (readonly, retain, nonatomic) *CGColor backgroundColor;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *layerInstructions;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? timeRange;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)_deepCopy;
-(id)blendingTransferFunction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setValuesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBlendingTransferFunction:(id)arg0 ;


@end


#endif