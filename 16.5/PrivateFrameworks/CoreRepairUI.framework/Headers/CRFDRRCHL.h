// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRRCHL_H
#define CRFDRRCHL_H

@class NSSet, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface CRFDRRCHL : NSObject

@property (retain, nonatomic) NSSet *dataClasses; // ivar: _dataClasses
@property (retain, nonatomic) NSSet *properties; // ivar: _properties
@property (retain, nonatomic) NSString *repairCenter; // ivar: _repairCenter
@property (retain, nonatomic) NSDate *repairDate; // ivar: _repairDate
@property (retain, nonatomic) NSString *repairDateStr; // ivar: _repairDateStr


-(id)description;
-(id)init;
-(id)initWithrepairDateStr:(id)arg0 repairDate:(id)arg1 repairCenter:(id)arg2 dataClasses:(id)arg3 properties:(id)arg4 ;


@end


#endif