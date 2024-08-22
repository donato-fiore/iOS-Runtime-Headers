// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCDISPATCHAFTERBLOCKS_H
#define DCDISPATCHAFTERBLOCKS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DCDispatchAfterBlocks : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
-(void)cancelAll;
-(void)dealloc;
-(void)dispatchAfter:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)performBlock:(id)arg0 ;


@end


#endif