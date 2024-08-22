// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBJCTIMESTAMP_H
#define OBJCTIMESTAMP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ObjCReplica.h"

@interface ObjCTimestamp : NSObject {
    ? timestamp;
}


@property (nonatomic, readonly) NSInteger counter;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) ObjCReplica *replica;


-(id)init;
-(id)initWithReplica:(id)arg0 counter:(NSInteger)arg1 ;


@end


#endif