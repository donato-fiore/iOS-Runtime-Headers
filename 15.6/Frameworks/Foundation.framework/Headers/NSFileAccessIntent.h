// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEACCESSINTENT_H
#define NSFILEACCESSINTENT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface NSFileAccessIntent : NSObject {
    NSInteger _options;
}


@property (copy) NSURL *URL; // ivar: _url
@property (readonly) BOOL isRead; // ivar: _isRead
@property (readonly) NSUInteger readingOptions;
@property (readonly) NSUInteger writingOptions;


+(id)readingIntentWithURL:(id)arg0 options:(NSUInteger)arg1 ;
+(id)writingIntentWithURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif