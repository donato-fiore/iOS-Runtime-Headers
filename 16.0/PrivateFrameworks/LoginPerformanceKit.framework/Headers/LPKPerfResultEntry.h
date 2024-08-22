// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPKPERFRESULTENTRY_H
#define LPKPERFRESULTENTRY_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface LPKPerfResultEntry : NSObject

@property (copy, nonatomic) NSString *entryName; // ivar: _entryName
@property (retain, nonatomic) NSMutableArray *entryValues; // ivar: _entryValues
@property (readonly, nonatomic) CGFloat meanValue; // ivar: _meanValue
@property (readonly, nonatomic) CGFloat medianValue; // ivar: _medianValue
@property (nonatomic) BOOL needsReCalculation; // ivar: _needsReCalculation


-(id)init;
-(void)_reCalculateValuesIfNeeded;
-(void)addEntryValue:(CGFloat)arg0 ;


@end


#endif