// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGDISPLAYLINK_H
#define PGDISPLAYLINK_H

@class CADisplayLink, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PGDisplayLink : NSObject <BSInvalidatable>

 {
    CADisplayLink *_link;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *linkFired; // ivar: _linkFired
@property (readonly, weak, nonatomic) id *owner; // ivar: _owner
@property (nonatomic) NSUInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (readonly) Class superclass;


-(id)initWithOwner:(id)arg0 linkFired:(id)arg1 ;
-(void)_linkFired:(id)arg0 ;
-(void)invalidate;


@end


#endif