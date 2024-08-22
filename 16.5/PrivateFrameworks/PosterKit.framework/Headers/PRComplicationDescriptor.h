// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONDESCRIPTOR_H
#define PRCOMPLICATIONDESCRIPTOR_H

@class ATXComplication, NSString, CHSWidget;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRComplicationDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasMatchingDescriptor;
@property (retain, nonatomic) ATXComplication *suggestedComplication; // ivar: _suggestedComplication
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) CHSWidget *widget; // ivar: _widget


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)PRSWidget;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPRSWidget:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 widget:(id)arg1 suggestedComplication:(id)arg2 ;
-(id)layoutElement;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif