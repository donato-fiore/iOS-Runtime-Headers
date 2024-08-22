// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCECOLUMNROWINDEXMAPPER_H
#define TSCECOLUMNROWINDEXMAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEColumnRowIndexMapper : NSObject <NSCopying>

 {
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _indexMap;
}


@property (readonly, nonatomic) BOOL isIdentityMapping;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initAsCompressionMapForIndexes:(id)arg0 ;
-(unsigned int)mappedIndexForSourceIndex:(unsigned int)arg0 ;


@end


#endif