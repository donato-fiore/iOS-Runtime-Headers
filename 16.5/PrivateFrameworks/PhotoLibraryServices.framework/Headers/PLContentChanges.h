// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCONTENTCHANGES_H
#define PLCONTENTCHANGES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLContentChanges : NSObject

@property (retain, nonatomic) NSMutableArray *container; // ivar: _container
@property (retain, nonatomic) NSMutableArray *updatedContent; // ivar: _updatedContent


-(void)cleanupState;


@end


#endif