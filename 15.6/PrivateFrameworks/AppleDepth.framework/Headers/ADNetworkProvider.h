// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADNETWORKPROVIDER_H
#define ADNETWORKPROVIDER_H

@class NSMutableDictionary, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ADNetworkProvider : NSObject {
    NSMutableDictionary *_sizesForInput;
    NSMutableDictionary *_sizesForOutput;
    NSMutableDictionary *_inputBufferMap;
    NSMutableDictionary *_outputBufferMap;
    NSDictionary *_networkMetadata;
}


@property float highConfidenceThresholdSuggestion; // ivar: _highConfidenceThresholdSuggestion
@property (readonly, nonatomic) NSMutableDictionary *layoutNamesDict; // ivar: _layoutNamesDict
@property float lowConfidenceThresholdSuggestion; // ivar: _lowConfidenceThresholdSuggestion
@property NSUInteger rawConfidenceUnits; // ivar: _rawConfidenceUnits
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)getAndVerifySizesFromConfig:(id)arg0 inDictionary:(id)arg1 forKey:(id)arg2 sizes:(id)arg3 layout:(*NSUInteger)arg4 ;
+(id)getAlternativePathForNetwork:(id)arg0 andPriority:(NSInteger)arg1 ;
+(id)getConfigFolderForNetwork:(id)arg0 ;
+(id)getDefaultPathForNetwork:(id)arg0 andPriority:(NSInteger)arg1 ;
+(id)getEspressoFileNameForNetwork:(id)arg0 andPriority:(NSInteger)arg1 ;
+(id)providerForNetwork:(id)arg0 ;
+(id)providerForNetwork:(id)arg0 prioritization:(NSInteger)arg1 ;
+(void)updateSizeForItem:(id)arg0 fromShape:(id)arg1 forLayout:(NSUInteger)arg2 target:(id)arg3 ;
-(id)bufferNameForInputType:(id)arg0 ;
-(id)bufferNameForOutputType:(id)arg0 ;
-(id)bufferNameForType:(id)arg0 isInput:(BOOL)arg1 ;
-(id)configurationNameForLayout:(NSUInteger)arg0 ;
-(id)descriptorForBuffer:(id)arg0 isInput:(BOOL)arg1 pixelFormat:(unsigned int)arg2 ;
-(id)descriptorForBufferOfType:(id)arg0 isInput:(BOOL)arg1 pixelFormat:(unsigned int)arg2 ;
-(id)initWithNetwork:(id)arg0 prioritization:(NSInteger)arg1 ;
-(id)metadataForKey:(id)arg0 ;
-(id)supportedSizesForInput:(id)arg0 ;
-(id)supportedSizesForOutput:(id)arg0 ;
-(struct CGSize )sizeFor:(id)arg0 isInput:(BOOL)arg1 requestedLayout:(NSUInteger)arg2 ;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(struct CGSize )sizeForInput:(id)arg0 withLayout:(NSUInteger)arg1 ;
-(struct CGSize )sizeForOutput:(id)arg0 ;
-(struct CGSize )sizeForOutput:(id)arg0 withLayout:(NSUInteger)arg1 ;


@end


#endif