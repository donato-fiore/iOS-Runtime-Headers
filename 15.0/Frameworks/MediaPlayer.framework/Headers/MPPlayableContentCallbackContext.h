// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPLAYABLECONTENTCALLBACKCONTEXT_H
#define MPPLAYABLECONTENTCALLBACKCONTEXT_H

@class NSIndexPath;

#import <Foundation/Foundation.h>


@interface MPPlayableContentCallbackContext : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) BOOL serviced; // ivar: _serviced


-(id)initWithIndexPath:(id)arg0 ;


@end


#endif