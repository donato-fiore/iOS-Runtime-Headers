// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT13STORABLECOLOR_H
#define _TTC10FINANCEKIT13STORABLECOLOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC10FinanceKit13StorableColor : NSObject <NSSecureCoding>

 {
    ? red;
    ? green;
    ? blue;
    ? alpha;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif