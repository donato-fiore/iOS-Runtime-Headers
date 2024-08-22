// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMANUALUPDATER_H
#define IMMANUALUPDATER_H


#import <Foundation/Foundation.h>


@interface IMManualUpdater : NSObject {
    BOOL _needsUpdate;
}


@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) BOOL needsUpdate;
@property (weak, nonatomic) id *target; // ivar: _target


-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateIfNeeded;


@end


#endif