// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDPREPORTERMOCK_H
#define TIDPREPORTERMOCK_H

@class NSMutableArray, NSString, NSArray;
@protocol TIDPReportingDelegate;

#import <Foundation/Foundation.h>


@interface TIDPReporterMock : NSObject <TIDPReportingDelegate>

 {
    NSMutableArray *_recordsWritten;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *recordsWritten;
@property (readonly) Class superclass;


-(BOOL)record:(id)arg0 ;
-(BOOL)record:(id)arg0 metadata:(id)arg1 ;
-(BOOL)recordNumbersVectors:(id)arg0 metadata:(id)arg1 ;
-(id)init;
-(void)reset;


@end


#endif