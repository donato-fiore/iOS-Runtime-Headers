// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNARCHIVER_H
#define CNARCHIVER_H


#import <Foundation/Foundation.h>


@interface CNArchiver : NSObject



+(id)decodeObjectOfClass:(Class)arg0 associatedClasses:(id)arg1 data:(id)arg2 error:(*id)arg3 ;
+(id)decodeObjectOfClass:(Class)arg0 data:(id)arg1 error:(*id)arg2 ;
+(id)encodeObject:(id)arg0 error:(*id)arg1 ;
+(id)os_log;


@end


#endif