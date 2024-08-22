// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMEDIATYPECOUNTEDSET_H
#define MLMEDIATYPECOUNTEDSET_H


#import <Foundation/Foundation.h>


@interface MLMediaTypeCountedSet : NSObject {
    map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _map;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)description;
-(void)addMediaType:(unsigned int)arg0 count:(NSUInteger)arg1 ;
-(void)enumerateMediaTypesWithBlock:(id)arg0 ;


@end


#endif