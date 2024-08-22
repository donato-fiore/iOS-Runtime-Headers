// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVOBJECT_H
#define PVOBJECT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PVObject : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocalIdentifier:(id)arg0 ;


@end


#endif