// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWLOADER_H
#define SWLOADER_H


#import <Foundation/Foundation.h>


@interface SWLoader : NSObject

@property (readonly, nonatomic) id *loadBlock; // ivar: _loadBlock


+(id)loaderWithBlock:(id)arg0 ;
-(void)load;


@end


#endif