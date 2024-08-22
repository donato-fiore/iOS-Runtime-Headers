// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2PRFPROTOCOL_H
#define NEIKEV2PRFPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2PRFProtocol : NSObject <NSCopying>

 {
    NSUInteger _type;
}


@property (readonly) NSUInteger type;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif