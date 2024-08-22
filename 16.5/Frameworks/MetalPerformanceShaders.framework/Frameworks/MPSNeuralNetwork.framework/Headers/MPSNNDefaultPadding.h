// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNDEFAULTPADDING_H
#define MPSNNDEFAULTPADDING_H

@class NSString;
@protocol MPSNNPadding;

#import <Foundation/Foundation.h>


@interface MPSNNDefaultPadding : NSObject <MPSNNPadding>

 {
    NSUInteger _method;
    BOOL _mpsOwned;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)paddingForTensorflowAveragePooling;
+(id)paddingForTensorflowAveragePoolingValidOnly;
+(id)paddingWithMethod:(NSUInteger)arg0 ;
+(id)zeroPaddingWithTopAmount:(NSUInteger)arg0 bottomAmount:(NSUInteger)arg1 leftAmount:(NSUInteger)arg2 rightAmount:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)paddingMethod;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaddingMethod:(NSUInteger)arg0 ;
-(id)label;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif