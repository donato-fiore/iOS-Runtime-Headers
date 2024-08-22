// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGEPTASK_H
#define IMDMESSAGEPTASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMDMessagePTask : NSObject

@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) NSUInteger taskFlags; // ivar: _taskFlags


-(BOOL)needsProccesingFor:(NSUInteger)arg0 ;
-(id)initWithGUID:(id)arg0 ;
-(id)initWithStoreDictionary:(id)arg0 ;
-(void)compeletedTask:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setTaskFlag:(NSUInteger)arg0 ;


@end


#endif