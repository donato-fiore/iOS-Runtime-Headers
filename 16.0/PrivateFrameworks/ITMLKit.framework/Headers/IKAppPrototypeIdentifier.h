// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPPROTOTYPEIDENTIFIER_H
#define IKAPPPROTOTYPEIDENTIFIER_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKAppPrototypeIdentifier : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *groupingValues; // ivar: _groupingValues
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *selector; // ivar: _selector


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 selector:(id)arg1 groupingValues:(id)arg2 ;


@end


#endif