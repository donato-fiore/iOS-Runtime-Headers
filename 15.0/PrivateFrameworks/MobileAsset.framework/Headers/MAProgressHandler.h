// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPROGRESSHANDLER_H
#define MAPROGRESSHANDLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MAProgressHandler : NSObject

@property (readonly, nonatomic) NSMutableArray *callBackArray; // ivar: _callBackArray
@property (nonatomic) NSUInteger notificationInterval; // ivar: _notificationInterval


-(id)initWithCallBack:(id)arg0 ;
-(void)addCallBack:(id)arg0 ;
-(void)dealloc;


@end


#endif