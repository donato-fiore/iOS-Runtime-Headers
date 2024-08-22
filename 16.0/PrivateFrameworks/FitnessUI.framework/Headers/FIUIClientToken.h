// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUICLIENTTOKEN_H
#define FIUICLIENTTOKEN_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FIUIClientToken : NSObject <NSCopying>

 {
    NSUUID *_UUID;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif