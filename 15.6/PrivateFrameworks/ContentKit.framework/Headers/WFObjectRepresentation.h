// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFOBJECTREPRESENTATION_H
#define WFOBJECTREPRESENTATION_H

@class NSString;


#import "WFRepresentation.h"
#import "WFObjectType.h"

@interface WFObjectRepresentation : WFRepresentation

@property (readonly, nonatomic) id *object; // ivar: _object
@property (readonly, nonatomic) NSString *specifiedName;
@property (readonly, nonatomic) NSString *wfName; // ivar: _wfName
@property (readonly, nonatomic) WFObjectType *wfType;


+(BOOL)supportsSecureCoding;
+(id)object:(id)arg0 ;
+(id)object:(id)arg0 named:(id)arg1 ;
+(id)objects:(id)arg0 ;
+(id)objects:(id)arg0 named:(id)arg1 ;
-(BOOL)isEncodable;
-(id)copyWithName:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 named:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif