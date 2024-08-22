// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSTATECAPTUREITEM_H
#define RBSTATECAPTUREITEM_H

@class NSString;
@protocol RBSInvalidatable;

#import <Foundation/Foundation.h>


@interface RBStateCaptureItem : NSObject {
    id<RBSInvalidatable> *_invalidatable;
}


@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 identifier:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif