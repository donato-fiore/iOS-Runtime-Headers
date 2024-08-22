// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDMODELASSETS_H
#define AMDMODELASSETS_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>

#import "AMDModelAssetsMetadata.h"

@interface AMDModelAssets : NSObject

@property (retain, nonatomic) AMDModelAssetsMetadata *assetsMetadata; // ivar: _assetsMetadata
@property (retain, nonatomic) NSDictionary *bitmasks; // ivar: _bitmasks
@property (retain, nonatomic) NSData *contentToLogicalMap; // ivar: _contentToLogicalMap
@property (retain, nonatomic) NSDictionary *dictionaries; // ivar: _dictionaries
@property (retain, nonatomic) NSData *logicalToContentMap; // ivar: _logicalToContentMap
@property (nonatomic) BOOL minimalMapPresent; // ivar: _minimalMapPresent
@property (nonatomic) BOOL useBinaryInputMap; // ivar: _useBinaryInputMap
@property (nonatomic) BOOL useBinaryOutputMap; // ivar: _useBinaryOutputMap


+(id)loadMapFromDir:(id)arg0 andFile:(id)arg1 error:(*id)arg2 ;
+(void)saveMap:(id)arg0 toDir:(id)arg1 inFile:(id)arg2 keyIsInt64:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)isValid;
-(id)getBitmaskByName:(id)arg0 usingFeatureProvider:(id)arg1 ;
-(id)getContentToLogicalMap;
-(id)getDictionaryByName:(id)arg0 ;
-(id)getLogicalToContentMap;
-(id)initAssetsfromDir:(id)arg0 error:(*id)arg1 ;
-(id)initFromDir:(id)arg0 andMetadata:(id)arg1 useBinaryInputMap:(BOOL)arg2 useBinaryOutputMap:(BOOL)arg3 withModelId:(id)arg4 isInference:(BOOL)arg5 error:(*id)arg6 ;
-(void)loadCToLMapFromDir:(id)arg0 error:(*id)arg1 ;
-(void)loadLToCMapFromDir:(id)arg0 error:(*id)arg1 ;
-(void)saveCToLMap:(id)arg0 toDir:(id)arg1 error:(*id)arg2 ;
-(void)saveLToCMap:(id)arg0 toDir:(id)arg1 error:(*id)arg2 ;


@end


#endif