// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFWEAKREFERENCEHOLDER_H
#define OFWEAKREFERENCEHOLDER_H


#import <Foundation/Foundation.h>


@interface OFWeakReferenceHolder : NSObject

@property (readonly) id *object; // ivar: _object


+(id)weakReferenceHolderWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif