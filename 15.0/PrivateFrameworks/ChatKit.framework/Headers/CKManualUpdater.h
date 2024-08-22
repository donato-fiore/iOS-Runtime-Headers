// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMANUALUPDATER_H
#define CKMANUALUPDATER_H


#import <Foundation/Foundation.h>


@interface CKManualUpdater : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) id *target; // ivar: _target


-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateIfNeeded;


@end


#endif