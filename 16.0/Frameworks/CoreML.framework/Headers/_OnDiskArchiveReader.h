// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ONDISKARCHIVEREADER_H
#define _ONDISKARCHIVEREADER_H

@class NSString, NSArray, NSDictionary;
@protocol _ArchiveReader;

#import <Foundation/Foundation.h>


@interface _OnDiskArchiveReader : NSObject <_ArchiveReader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *layerInfos; // ivar: _layerInfos
@property (readonly, copy, nonatomic) NSString *modelPath; // ivar: _modelPath
@property (readonly, copy, nonatomic) NSDictionary *netJson; // ivar: _netJson
@property (readonly, copy, nonatomic) NSDictionary *shapeJson; // ivar: _shapeJson
@property (readonly) Class superclass;


+(id)modelName;
+(id)modelNetFileName;
+(id)modelShapeFileName;
+(id)parseCompiledNetworkBlobWithName:(id)arg0 archive:(*void)arg1 error:(*id)arg2 ;
+(id)readerFromArchiver:(*void)arg0 error:(*id)arg1 ;
-(id)initWithNetJson:(id)arg0 shapeJson:(id)arg1 modelPath:(id)arg2 ;
-(id)loadUpdatableParams:(*id)arg0 ;
-(id)transformParams;
-(void)copyLayerShapesToContainer:(id)arg0 ;


@end


#endif