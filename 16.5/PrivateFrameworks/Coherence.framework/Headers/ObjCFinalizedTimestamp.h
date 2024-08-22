// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBJCFINALIZEDTIMESTAMP_H
#define OBJCFINALIZEDTIMESTAMP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ObjCReplica.h"

@interface ObjCFinalizedTimestamp : NSObject {
    ? timestamp;
}


@property (nonatomic, readonly) NSInteger counter;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) ObjCReplica *replica;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGreaterThanTimestamp:(id)arg0 ;
-(id)init;
-(id)initWithReplica:(id)arg0 counter:(NSInteger)arg1 ;


@end


#endif