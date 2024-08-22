// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSCOALESCEOBJECTITEMS_H
#define BCSCOALESCEOBJECTITEMS_H

@class NSString;
@protocol BCSCoalesceObjectProtocol;

#import <Foundation/Foundation.h>


@interface BCSCoalesceObjectItems : NSObject <BCSCoalesceObjectProtocol>



@property (readonly, nonatomic) NSString *coalesceKey; // ivar: _coalesceKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *itemsCompletionBlock; // ivar: _itemsCompletionBlock
@property (readonly) Class superclass;


// -(id)initWithCompletionBlock:(id)arg0 coalesceKey:(unk)arg1  ;


@end


#endif