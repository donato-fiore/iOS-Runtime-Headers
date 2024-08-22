// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBJCREPLICA_H
#define OBJCREPLICA_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface ObjCReplica : NSObject {
    ? uuid;
}


@property (nonatomic) NSInteger index; // ivar: index
@property (nonatomic, copy) NSUUID *uuid;


-(id)init;
-(id)initWithUuid:(id)arg0 index:(NSInteger)arg1 ;


@end


#endif