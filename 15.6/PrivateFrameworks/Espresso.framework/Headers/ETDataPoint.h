// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETDATAPOINT_H
#define ETDATAPOINT_H


#import <Foundation/Foundation.h>


@interface ETDataPoint : NSObject {
    map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> image_buffers;
    map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>> buffers;
}




-(*float)bufferWithKey:(id)arg0 ;
-(struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> )getSampleData;
-(struct vImage_Buffer )imageWithKey:(id)arg0 ;
-(void)dealloc;
-(void)iterateBuffersByKey:(id)arg0 ;
-(void)setData:(*float)arg0 size:(NSUInteger)arg1 forKey:(id)arg2 freeWhenDone:(BOOL)arg3 ;
-(void)setImage:(struct vImage_Buffer )arg0 forKey:(id)arg1 ;


@end


#endif