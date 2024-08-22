// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSJSONREADER_H
#define _NSJSONREADER_H


#import <Foundation/Foundation.h>


@interface _NSJSONReader : NSObject



+(BOOL)validForJSON:(id)arg0 depth:(NSUInteger)arg1 allowFragments:(BOOL)arg2 ;
-(id)parseData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)parseStream:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif