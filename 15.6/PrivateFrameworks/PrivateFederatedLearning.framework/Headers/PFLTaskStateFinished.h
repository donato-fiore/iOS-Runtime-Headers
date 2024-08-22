// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLTASKSTATEFINISHED_H
#define PFLTASKSTATEFINISHED_H

@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateFinished : NSObject <PFLTaskState>





+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif