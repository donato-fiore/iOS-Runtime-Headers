// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETDATASOURCEBUF_H
#define ETDATASOURCEBUF_H

@protocol ETDataSource;

#import <Foundation/Foundation.h>


@interface ETDataSourceBuf : NSObject <ETDataSource>

 {
    map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> blobs;
    int number_of_data_points;
}




-(*float)dataAtIndex:(NSUInteger)arg0 key:(*void)arg1 ;
-(id)dataPointAtIndex:(int)arg0 ;
-(int)numberOfDataPoints;
-(void)setBlobs:(*void)arg0 numberOfDataPoints:(int)arg1 nonBatches:(*void)arg2 ;


@end


#endif