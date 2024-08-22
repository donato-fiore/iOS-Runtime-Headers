// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCIMAGESTORE_H
#define BCIMAGESTORE_H

@class NSData, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BCImageStore : NSObject {
    NSData *_data;
}


@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSArray *rawArray; // ivar: _rawArray


-(id)initWithArray:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithImages:(id)arg0 ;


@end


#endif