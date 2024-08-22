// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFDUMPCATEGORY_H
#define CARPFDUMPCATEGORY_H

@class NSString;
@protocol CARPFLogging;

#import <Foundation/Foundation.h>


@interface CARPFDumpCategory : NSObject <CARPFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;


@end


#endif