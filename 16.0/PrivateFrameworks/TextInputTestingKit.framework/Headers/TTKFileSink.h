// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTKFILESINK_H
#define TTKFILESINK_H

@class NSString, NSDictionary, NSMutableArray;
@protocol TTKTestCaseSink;

#import <Foundation/Foundation.h>


@interface TTKFileSink : NSObject <TTKTestCaseSink>

 {
    NSString *_fileName;
    NSString *_inputMode;
    NSDictionary *_layouts;
    NSMutableArray *_testCases;
    int _testCaseIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generateData;
-(id)generateLayouts;
-(id)generateTestCases;
-(id)init:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 ;
-(void)addLayouts:(id)arg0 ;
-(void)close;
-(void)flush;
-(void)pushNextTestCase:(id)arg0 ;


@end


#endif