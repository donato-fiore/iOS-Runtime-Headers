// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKSTATECOMPILINGMODEL_H
#define PFLTASKSTATECOMPILINGMODEL_H

@class NSURL;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif