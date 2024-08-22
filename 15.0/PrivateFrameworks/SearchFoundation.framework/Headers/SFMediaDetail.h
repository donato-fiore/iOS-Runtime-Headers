// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMEDIADETAIL_H
#define SFMEDIADETAIL_H

@class NSString, NSDictionary, NSData;
@protocol SFMediaDetail, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFText.h"

@interface SFMediaDetail : NSObject <SFMediaDetail, NSSecureCoding, NSCopying>



@property (retain, nonatomic) SFText *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif