// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCONSTANTAVAILABLETABLEWIDTHPROVIDER_H
#define ICCONSTANTAVAILABLETABLEWIDTHPROVIDER_H

@class NSString;
@protocol ICAvailableTableWidthProviding;

#import <Foundation/Foundation.h>


@interface ICConstantAvailableTableWidthProvider : NSObject <ICAvailableTableWidthProviding>



@property (nonatomic) CGFloat availableWidth; // ivar: _availableWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif