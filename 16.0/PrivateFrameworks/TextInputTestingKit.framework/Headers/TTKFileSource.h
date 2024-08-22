// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTKFILESOURCE_H
#define TTKFILESOURCE_H

@class NSMutableArray, NSString, NSDictionary;
@protocol TTKTestCaseSource;

#import <Foundation/Foundation.h>


@interface TTKFileSource : NSObject <TTKTestCaseSource>

 {
    NSMutableArray *_test_cases;
    int _test_case_index;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float fileVersion; // ivar: _fileVersion
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (readonly, copy, nonatomic) NSDictionary *layouts; // ivar: _layouts
@property (readonly, nonatomic) int majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) int minorVersion; // ivar: _minorVersion
@property (copy, nonatomic) id *onNewLayoutsFound; // ivar: _onNewLayoutsFound
@property (readonly) Class superclass;


-(BOOL)parseData:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)getNextTestCase;
-(id)init:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 ;
-(void)parseLayouts:(id)arg0 ;
-(void)reset;


@end


#endif