// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONVERSIONOPTIONSET_H
#define CONVERSIONOPTIONSET_H

@class NSMutableArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ConversionOptionSet : NSObject

@property (retain) NSMutableArray *conversionOptionInputKeyValuePairs; // ivar: _conversionOptionInputKeyValuePairs
@property (retain) NSMutableDictionary *conversionOptions; // ivar: _conversionOptions
@property (retain) NSString *conversionType; // ivar: _conversionType
@property (retain) NSString *destinationPath; // ivar: _destinationPath
@property (retain) NSString *destinationPathVideoComplement; // ivar: _destinationPathVideoComplement
@property (retain) NSString *presetName; // ivar: _presetName
@property NSInteger repeatCount; // ivar: _repeatCount
@property BOOL replaceExistingOutput; // ivar: _replaceExistingOutput
@property (retain) NSString *sourcePath; // ivar: _sourcePath
@property (retain) NSString *sourcePathVideoComplement; // ivar: _sourcePathVideoComplement
@property BOOL verbose; // ivar: _verbose


+(id)knownConversionTypes;
+(struct CGSize )sizeForImageAtPath:(id)arg0 ;
-(BOOL)processConversionOptionKey:(id)arg0 valueString:(id)arg1 ;
-(CGFloat)scaleFactorForInputSize:(struct CGSize )arg0 sharedStreamsSizeSpecificationString:(id)arg1 ;
-(id)arrayOfStringsForString:(id)arg0 ;
-(id)cmTimeRangeDictionaryForString:(id)arg0 ;
-(id)conversionOptionValueForString:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)init;
-(id)metadataPolicyForString:(id)arg0 ;
-(id)photosAdjustmentsDictionaryForString:(id)arg0 ;
-(id)presetListForMapping:(id)arg0 ;
-(int)checkDestinationExists;
-(int)validateAndProcess;


@end


#endif