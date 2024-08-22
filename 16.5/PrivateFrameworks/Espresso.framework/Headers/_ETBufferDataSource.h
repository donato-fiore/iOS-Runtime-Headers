// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ETBUFFERDATASOURCE_H
#define _ETBUFFERDATASOURCE_H

@class NSString;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface _ETBufferDataSource : NSObject <ETDataProvider>

 {
    vector<std::string, std::allocator<std::string>> _nonBatchBlobNames;
    unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> _dataStorage;
    unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> _blobShapes;
}


@property NSUInteger batchSize; // ivar: _batchSize
@property ? blobShapes;
@property ? dataStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? nonBatchBlobNames;
@property NSUInteger number_of_data_points; // ivar: _number_of_data_points
@property (readonly) Class superclass;


-(*float)dataAtIndex:(NSUInteger)arg0 key:(*void)arg1 ;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithBlobShapes:(*void)arg0 numberOfDataPoints:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif