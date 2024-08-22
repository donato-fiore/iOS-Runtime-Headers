// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFDPREPORTERMOCK_H
#define EMFDPREPORTERMOCK_H

@class NSMutableArray, NSString, NSArray;
@protocol EMFDPReportingDelegate;

#import <Foundation/Foundation.h>


@interface EMFDPReporterMock : NSObject <EMFDPReportingDelegate>

 {
    NSMutableArray *_recordsWritten;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *recordsWritten;
@property (readonly) Class superclass;


-(BOOL)record:(id)arg0 ;
-(id)init;
-(void)reset;


@end


#endif