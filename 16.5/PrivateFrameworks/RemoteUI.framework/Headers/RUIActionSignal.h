// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIACTIONSIGNAL_H
#define RUIACTIONSIGNAL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface RUIActionSignal : NSObject

@property (retain, nonatomic) NSMutableArray *subActions; // ivar: _subActions
@property (nonatomic) NSUInteger topSignal; // ivar: _topSignal


+(NSUInteger)signalTypeForString:(id)arg0 ;
+(id)signalWithString:(id)arg0 ;
+(id)signalWithType:(NSUInteger)arg0 ;
+(id)stringForActionSignal:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif