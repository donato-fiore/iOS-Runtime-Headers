// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSUBMESHDATA_H
#define GTSUBMESHDATA_H


#import <Foundation/Foundation.h>


@interface GTSubmeshData : NSObject {
    vector<unsigned int, std::allocator<unsigned int>> _indexVector;
}


@property (readonly, nonatomic) NSUInteger indexCount;
@property (readonly, nonatomic) *unsigned int indexData;


-(void)addIndex:(unsigned int)arg0 ;


@end


#endif