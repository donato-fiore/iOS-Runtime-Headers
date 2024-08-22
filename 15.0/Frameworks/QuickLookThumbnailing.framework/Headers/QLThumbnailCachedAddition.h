// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTHUMBNAILCACHEDADDITION_H
#define QLTHUMBNAILCACHEDADDITION_H

@class GSAddition;

#import <Foundation/Foundation.h>


@interface QLThumbnailCachedAddition : NSObject {
    NSUInteger _fileID;
}


@property (retain) GSAddition *addition; // ivar: _addition


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStillValid;
-(NSUInteger)hash;
-(id)initWithAddition:(id)arg0 ;


@end


#endif