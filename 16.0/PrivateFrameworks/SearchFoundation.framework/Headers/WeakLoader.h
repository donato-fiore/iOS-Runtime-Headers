// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEAKLOADER_H
#define WEAKLOADER_H

@protocol SFResourceLoader;

#import <Foundation/Foundation.h>


@interface WeakLoader : NSObject {
    id<SFResourceLoader> *_weakLoader;
}


@property (readonly, nonatomic) NSObject<SFResourceLoader> *strongloader;


-(id)initWithLoader:(id)arg0 ;


@end


#endif