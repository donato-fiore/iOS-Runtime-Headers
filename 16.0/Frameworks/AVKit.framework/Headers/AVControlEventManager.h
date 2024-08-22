// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTROLEVENTMANAGER_H
#define AVCONTROLEVENTMANAGER_H

@class NSMutableArray, NSString;
@protocol AVControlEventPublishing;

#import <Foundation/Foundation.h>


@interface AVControlEventManager : NSObject <AVControlEventPublishing>

 {
    id *_owner;
    NSMutableArray *_actionStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOwner:(id)arg0 ;
-(void)addAction:(SEL)arg0 withTarget:(id)arg1 forControlEvent:(id)arg2 ;
-(void)sendActionsForEvent:(id)arg0 ;


@end


#endif