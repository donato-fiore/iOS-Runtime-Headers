// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUERRORMESSAGE_H
#define NUERRORMESSAGE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUErrorMessage : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;


@end


#endif