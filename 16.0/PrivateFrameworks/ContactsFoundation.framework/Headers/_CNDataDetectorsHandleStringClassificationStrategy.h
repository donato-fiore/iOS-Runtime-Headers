// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNDATADETECTORSHANDLESTRINGCLASSIFICATIONSTRATEGY_H
#define _CNDATADETECTORSHANDLESTRINGCLASSIFICATIONSTRATEGY_H

@class NSString;
@protocol _CNHandleStringClassificationStrategy;

#import <Foundation/Foundation.h>


@interface _CNDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)assistedDataDetectorsStrategy;
+(id)dataDetectorsStrategy;
-(NSUInteger)classificationOfHandleString:(id)arg0 ;


@end


#endif