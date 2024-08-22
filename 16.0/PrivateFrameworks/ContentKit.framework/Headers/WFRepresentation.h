// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREPRESENTATION_H
#define WFREPRESENTATION_H

@class NSString, WFType;
@protocol WFNaming, WFTyping, WFCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFRepresentation : NSObject <WFNaming, WFTyping, WFCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isEncodable) BOOL encodable;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFType *wfType;


+(BOOL)supportsSecureCoding;
-(id)copyWithName:(id)arg0 ;
-(id)copyWithName:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif