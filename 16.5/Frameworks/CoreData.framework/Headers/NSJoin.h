// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSJOIN_H
#define NSJOIN_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSJoin : NSObject <NSCoding, NSCopying>

 {
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceAttributeName:(id)arg0 destinationAttributeName:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif