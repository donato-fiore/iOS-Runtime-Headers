// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWLOGGER_H
#define SWLOGGER_H

@class NSString, NSMutableDictionary;
@protocol SWLogger;

#import <Foundation/Foundation.h>


@interface SWLogger : NSObject <SWLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *values; // ivar: _values


-(id)constructLogWithMessage:(id)arg0 ;
-(id)init;
-(void)bindValue:(id)arg0 forKey:(id)arg1 ;
-(void)log:(id)arg0 ;
-(void)logError:(id)arg0 ;
-(void)logSensitive:(id)arg0 ;


@end


#endif