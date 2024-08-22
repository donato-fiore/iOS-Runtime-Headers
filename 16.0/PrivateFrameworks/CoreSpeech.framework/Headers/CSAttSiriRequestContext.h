// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSATTSIRIREQUESTCONTEXT_H
#define CSATTSIRIREQUESTCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSAttSiriRequestContext : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger reqSrc; // ivar: _reqSrc


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestSource:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif