// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMJSONUTILITIES_H
#define RMJSONUTILITIES_H


#import <Foundation/Foundation.h>


@interface RMJSONUtilities : NSObject



+(BOOL)serializeJSONDictionary:(id)arg0 fileURL:(id)arg1 error:(*id)arg2 ;
+(id)deserializeJSONDictionaryAtFileURL:(id)arg0 error:(*id)arg1 ;


@end


#endif