// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPOBJECTSERIALIZATIONDIRECTORYENTRY_H
#define TSPOBJECTSERIALIZATIONDIRECTORYENTRY_H


#import <Foundation/Foundation.h>


@interface TSPObjectSerializationDirectoryEntry : NSObject

@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(id)init;
-(id)initWithOffset:(NSUInteger)arg0 size:(NSUInteger)arg1 ;


@end


#endif