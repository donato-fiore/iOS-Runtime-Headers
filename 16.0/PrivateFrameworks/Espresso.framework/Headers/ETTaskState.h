// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETTASKSTATE_H
#define ETTASKSTATE_H


#import <Foundation/Foundation.h>


@interface ETTaskState : NSObject {
    unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> _blobs;
}


@property ? blobs;
@property shared_ptr<Espresso::net> networkPointer; // ivar: _networkPointer


-(?)initWithNetwork;
-(id)initWithBlobMap:(*void)arg0 ;


@end


#endif