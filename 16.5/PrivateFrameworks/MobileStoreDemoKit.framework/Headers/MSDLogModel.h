// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDLOGMODEL_H
#define MSDLOGMODEL_H


#import <Foundation/Foundation.h>


@interface MSDLogModel : NSObject

@property *__sFILE logFP; // ivar: _logFP


+(id)sharedInstance;
-(BOOL)enableLogToFile:(id)arg0 ;
-(BOOL)enableLogToFilesUnder:(id)arg0 prefix:(id)arg1 expireDays:(NSInteger)arg2 ;
-(id)fileNameForTodayUnder:(id)arg0 prefix:(id)arg1 ;
-(void)logMessage:(id)arg0 ;
-(void)logWithFormat:(id)arg0 andArgs:(char *)arg1 ;


@end


#endif