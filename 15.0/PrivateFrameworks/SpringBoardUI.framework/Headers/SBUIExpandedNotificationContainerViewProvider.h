// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIEXPANDEDNOTIFICATIONCONTAINERVIEWPROVIDER_H
#define SBUIEXPANDEDNOTIFICATIONCONTAINERVIEWPROVIDER_H

@class UIView, NSString;
@protocol NCContainerViewProviding;

#import <Foundation/Foundation.h>


@interface SBUIExpandedNotificationContainerViewProvider : NSObject <NCContainerViewProviding>

 {
    id *_invalidationBlock;
    BOOL _invalidated;
}


@property (readonly, weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, weak, nonatomic) id *requester; // ivar: _requester
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithRequester:(id)arg0 containerView:(id)arg1 reason:(id)arg2 invalidationBlock:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif