// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCPLPLISTHANDLER_H
#define PLCPLPLISTHANDLER_H


#import <Foundation/Foundation.h>


@interface PLCPLPlistHandler : NSObject



+(BOOL)CPLPlistFileExistsWithPathManager:(id)arg0 ;
+(id)_cplPlistURLWithPathManager:(id)arg0 verb:(id)arg1 ;
+(id)_readCPLPlistWithPathManager:(id)arg0 ;
+(id)readCPLPlistObjectWithKey:(id)arg0 pathManager:(id)arg1 ;
+(void)deleteCPLPlistWithPathManager:(id)arg0 ;
+(void)initialize;
+(void)saveCPLPlistObject:(id)arg0 forKey:(id)arg1 pathManager:(id)arg2 ;


@end


#endif