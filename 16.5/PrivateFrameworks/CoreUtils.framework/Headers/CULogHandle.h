// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CULOGHANDLE_H
#define CULOGHANDLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CULogHandle : NSObject {
    NSString *_categoryName;
    *LogCategory _ucatPtr;
}


@property (copy, nonatomic) NSString *label; // ivar: _label


-(id)initWithSubsystem:(id)arg0 category:(id)arg1 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 logFlags:(unsigned int)arg2 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 logLevel:(int)arg2 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 logLevel:(int)arg2 logFlags:(unsigned int)arg3 ;
-(void)dealloc;
-(void)ulog:(int)arg0 message:(id)arg1 ;
-(void)ulogf:(int)arg0 format:(id)arg1 ;
-(void)ulogv:(int)arg0 format:(id)arg1 args:(char *)arg2 ;


@end


#endif