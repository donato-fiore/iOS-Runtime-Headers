// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBWORKSPACECONNECTIONSSTATE_H
#define FBWORKSPACECONNECTIONSSTATE_H

@class NSMutableIndexSet, NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableIndexSet *_pidSet;
}


@property (readonly, copy, nonatomic) NSSet *processIdentifiers;
@property (readonly, nonatomic) NSUInteger serializedDataLength;


+(NSUInteger)minimumSerializedDataLength;
+(id)deserializeLength:(*NSUInteger)arg0 fromReader:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)serializeToWriter:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIndexSet:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif