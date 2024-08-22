// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUMANAGEDTEMPORARYDIRECTORY_H
#define TSUMANAGEDTEMPORARYDIRECTORY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TSUManagedTemporaryDirectory : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;


@end


#endif