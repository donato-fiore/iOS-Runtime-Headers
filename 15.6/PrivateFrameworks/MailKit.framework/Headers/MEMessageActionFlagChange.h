// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEMESSAGEACTIONFLAGCHANGE_H
#define MEMESSAGEACTIONFLAGCHANGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageActionFlagChange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger flag; // ivar: _flag


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlag:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif