// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCFRONTMOSTAPPLICATIONOBSERVER_H
#define GCFRONTMOSTAPPLICATIONOBSERVER_H

@protocol GCFrontmostApplicationObserverDelegate;

#import <Foundation/Foundation.h>


@interface GCFrontmostApplicationObserver : NSObject {
    int _frontmostPid;
}


@property (weak, nonatomic) NSObject<GCFrontmostApplicationObserverDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;


@end


#endif