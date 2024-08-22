// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMUSICPLAYERCONTROLLERQUEUE_H
#define MPMUSICPLAYERCONTROLLERQUEUE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MPMusicPlayerControllerQueue : NSObject {
    NSArray *_items;
}


@property (readonly, copy, nonatomic) NSArray *items;


-(id)initWithController:(id)arg0 ;
-(void)fault;


@end


#endif