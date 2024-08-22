// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLTASKSTATEERROR_H
#define PFLTASKSTATEERROR_H

@class NSError;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateError : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif