// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSINSTANTANSWERACTION_H
#define CSINSTANTANSWERACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSInstantAnswerAction : NSObject <NSCopying>



@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSString *url; // ivar: _url


+(id)actionWithType:(id)arg0 andUrl:(id)arg1 ;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithType:(id)arg0 andUrl:(id)arg1 ;


@end


#endif