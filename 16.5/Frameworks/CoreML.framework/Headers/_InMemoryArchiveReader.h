// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INMEMORYARCHIVEREADER_H
#define _INMEMORYARCHIVEREADER_H

@class NSString, NSArray;
@protocol _ArchiveReader;

#import <Foundation/Foundation.h>


@interface _InMemoryArchiveReader : NSObject <_ArchiveReader>

 {
    ? _network;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *layerInfos; // ivar: _layerInfos
@property (readonly, copy, nonatomic) NSString *modelPath;
@property (readonly) Class superclass;


+(id)modelName;
+(id)readerFromArchiver:(*void)arg0 error:(*id)arg1 ;
-(?)initWithNetwork;
-(id)loadUpdatableParams:(*id)arg0 ;
-(id)transformParams;
-(void)copyLayerShapesToContainer:(id)arg0 ;


@end


#endif