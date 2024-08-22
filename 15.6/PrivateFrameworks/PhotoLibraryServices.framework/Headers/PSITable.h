// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSITABLE_H
#define PSITABLE_H

@protocol PSITableDelegate;

#import <Foundation/Foundation.h>


@interface PSITable : NSObject {
    BOOL _finalizzeWasCalled;
}


@property (readonly, weak) NSObject<PSITableDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 searchable:(BOOL)arg1 writable:(BOOL)arg2 ;
-(void)clear;
-(void)dealloc;
-(void)finalizze;


@end


#endif