// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REAPPKEY_H
#define _REAPPKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _REAppKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL remote; // ivar: _remote


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 remote:(BOOL)arg1 ;


@end


#endif