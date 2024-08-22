// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATACOMBCOMPONENT_H
#define CATACOMBCOMPONENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CatacombComponent : NSObject <NSCopying>

 {
    ? _component;
}


@property (readonly, nonatomic) *? component;
@property (readonly, nonatomic) unsigned int userID;


+(id)componentForUserID:(unsigned int)arg0 ;
+(id)masterComponent;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToComponent:(id)arg0 ;
-(BOOL)isMasterComponent;
-(BOOL)isUserComponent;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif