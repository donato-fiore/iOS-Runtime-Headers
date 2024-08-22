// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMPORTEXCEPTIONRECORDER_H
#define PHIMPORTEXCEPTIONRECORDER_H

@class NSString, NSMutableArray;
@protocol PHImportExceptionRecorder;

#import <Foundation/Foundation.h>


@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *exceptions; // ivar: _exceptions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addExceptionWithType:(NSInteger)arg0 path:(id)arg1 underlyingError:(id)arg2 file:(char *)arg3 line:(NSUInteger)arg4 ;
-(id)init;
-(id)logForExceptions;
-(void)addException:(id)arg0 ;
-(void)addExceptions:(id)arg0 ;
-(void)logErrors;


@end


#endif