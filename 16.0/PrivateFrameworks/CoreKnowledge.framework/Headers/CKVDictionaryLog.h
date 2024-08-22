// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDICTIONARYLOG_H
#define CKVDICTIONARYLOG_H

@class NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKVDictionaryLog : NSObject {
    NSURL *_logFileURL;
    NSMutableDictionary *_log;
    int _protectionClass;
}




-(BOOL)clear;
-(BOOL)writeUpdatedObject:(id)arg0 forKey:(id)arg1 ;
-(BOOL)writeUpdatedObjects:(id)arg0 forKeys:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithFilename:(id)arg0 directory:(id)arg1 ;
-(id)initWithFilename:(id)arg0 directory:(id)arg1 protectionClass:(int)arg2 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif