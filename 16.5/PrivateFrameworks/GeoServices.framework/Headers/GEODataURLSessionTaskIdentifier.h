// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODATAURLSESSIONTASKIDENTIFIER_H
#define GEODATAURLSESSIONTASKIDENTIFIER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying>

 {
    NSInteger _sessionIdentity;
    NSUInteger _taskIdentifier;
    NSUInteger _hash;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSession:(id)arg0 task:(id)arg1 ;


@end


#endif