// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSPREDICATE_H
#define MPSPREDICATE_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface MPSPredicate : NSObject

@property (readonly, retain, nonatomic) NSObject<MTLBuffer> *predicateBuffer; // ivar: _predicateBuffer
@property (readonly, nonatomic) NSUInteger predicateOffset; // ivar: _predicateOffset


+(id)predicateWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif