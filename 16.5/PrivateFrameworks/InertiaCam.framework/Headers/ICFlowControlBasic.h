// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFLOWCONTROLBASIC_H
#define ICFLOWCONTROLBASIC_H

@protocol ICFlowControl;

#import <Foundation/Foundation.h>


@interface ICFlowControlBasic : NSObject <ICFlowControl>



@property (copy, nonatomic) id *reportProgress; // ivar: reportProgress
@property (copy, nonatomic) id *shouldBeCanceled; // ivar: shouldBeCanceled


-(BOOL)ICShouldBeCanceled;
-(id)initWithCancel:(id)arg0 ;
-(id)initWithProgress:(id)arg0 ;
-(void)ICReportProgress:(float)arg0 ;


@end


#endif