// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKHTTPPARSER_H
#define MKHTTPPARSER_H


#import <Foundation/Foundation.h>


@interface MKHTTPParser : NSObject



-(id)chunk:(id)arg0 offset:(*NSUInteger)arg1 done:(*BOOL)arg2 ;
-(id)parse:(id)arg0 hostname:(id)arg1 ;
-(id)parts:(id)arg0 boundary:(id)arg1 container:(id)arg2 ;


@end


#endif