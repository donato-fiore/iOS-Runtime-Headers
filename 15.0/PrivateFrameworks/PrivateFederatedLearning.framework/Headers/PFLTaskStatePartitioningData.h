// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLTASKSTATEPARTITIONINGDATA_H
#define PFLTASKSTATEPARTITIONINGDATA_H

@class NSURL;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSURL *compiledModelURL; // ivar: _compiledModelURL


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompiledModelURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif