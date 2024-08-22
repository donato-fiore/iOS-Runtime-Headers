// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAPPLEARCHIVELOGGER_H
#define PFAPPLEARCHIVELOGGER_H



#import "PFAppleArchiveStream.h"

@interface PFAppleArchiveLogger : PFAppleArchiveStream



+(BOOL)encodeFile:(id)arg0 destination:(id)arg1 error:(*id)arg2 ;
-(BOOL)encodeBuffer:(*void)arg0 size:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)flush:(*id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 ;


@end


#endif