// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMTTOKEN_H
#define EMTTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMTToken : NSObject <NSCopying>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL followedBySpace; // ivar: _followedBySpace
@property (readonly, nonatomic) BOOL precededBySpace; // ivar: _precededBySpace
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 confidence:(float)arg1 precededBySpace:(BOOL)arg2 followedBySpace:(BOOL)arg3 ;


@end


#endif