// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLAZY_H
#define ASCLAZY_H


#import <Foundation/Foundation.h>


@interface ASCLazy : NSObject

@property (readonly, copy, nonatomic) id *factory; // ivar: _factory
@property (readonly, nonatomic) os_unfair_lock_s loadingGuard; // ivar: _loadingGuard
@property (readonly) id *object;
@property (retain) id *objectIfLoaded; // ivar: _objectIfLoaded


-(id)description;
-(id)initWithFactory:(id)arg0 ;


@end


#endif