// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKREQUESTIDENTIFIER_H
#define GKREQUESTIDENTIFIER_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKRequestIdentifier : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *arguments; // ivar: _arguments
@property (nonatomic) NSUInteger savedHash; // ivar: _savedHash
@property (nonatomic) SEL selector; // ivar: _selector


+(id)requestIdentifierForInvocation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_argumentsForInvocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInvocation:(id)arg0 ;


@end


#endif