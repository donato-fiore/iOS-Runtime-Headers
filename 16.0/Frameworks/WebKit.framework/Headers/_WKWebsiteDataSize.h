// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKWEBSITEDATASIZE_H
#define _WKWEBSITEDATASIZE_H


#import <Foundation/Foundation.h>


@interface _WKWebsiteDataSize : NSObject {
    Size _size;
}


@property (readonly, nonatomic) NSUInteger totalSize;


-(NSUInteger)sizeOfDataTypes:(id)arg0 ;
-(id)initWithSize:(*void)arg0 ;


@end


#endif