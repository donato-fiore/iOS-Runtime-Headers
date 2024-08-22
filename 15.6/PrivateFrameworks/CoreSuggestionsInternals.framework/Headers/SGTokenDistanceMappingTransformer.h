// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTOKENDISTANCEMAPPINGTRANSFORMER_H
#define SGTOKENDISTANCEMAPPINGTRANSFORMER_H

@class NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxDistance; // ivar: _maxDistance
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *targetString; // ivar: _targetString


+(BOOL)debugAppendText:(id)arg0 ;
+(id)transformArray:(id)arg0 withTargetIndex:(NSUInteger)arg1 maximumDistance:(NSUInteger)arg2 ;
+(id)withTarget:(id)arg0 maxDistance:(NSUInteger)arg1 ;
+(void)debugSetContext:(id)arg0 ;
+(void)debugStoreContext;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenDistanceMappingTransformer:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithTarget:(id)arg0 maxDistance:(NSUInteger)arg1 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;


@end


#endif