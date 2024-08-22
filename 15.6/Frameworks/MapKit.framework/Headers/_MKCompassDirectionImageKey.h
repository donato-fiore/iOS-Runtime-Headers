// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKCOMPASSDIRECTIONIMAGEKEY_H
#define _MKCOMPASSDIRECTIONIMAGEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _MKCompassDirectionImageKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger compassViewStyle; // ivar: _compassViewStyle
@property (readonly, nonatomic) NSString *headingString; // ivar: _headingString
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 headingString:(id)arg1 compassViewStyle:(NSInteger)arg2 ;


@end


#endif