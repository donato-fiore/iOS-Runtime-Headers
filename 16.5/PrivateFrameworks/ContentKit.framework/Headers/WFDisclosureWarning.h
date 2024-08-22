// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDISCLOSUREWARNING_H
#define WFDISCLOSUREWARNING_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDisclosureWarning : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *localizedMessage;


+(BOOL)supportsSecureCoding;
+(id)allDisclosureWarningClasses;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif