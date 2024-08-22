// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETDATASOURCEBLOBF4_H
#define ETDATASOURCEBLOBF4_H

@protocol ETDataSource;

#import <Foundation/Foundation.h>


@interface ETDataSourceBlobF4 : NSObject <ETDataSource>

 {
    map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> blobs;
}




-(id)dataPointAtIndex:(int)arg0 ;
-(int)numberOfDataPoints;
-(void)addBlob:(id)arg0 forKey:(id)arg1 ;


@end


#endif