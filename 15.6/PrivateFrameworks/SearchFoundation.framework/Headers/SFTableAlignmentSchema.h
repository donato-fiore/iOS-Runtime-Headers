// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTABLEALIGNMENTSCHEMA_H
#define SFTABLEALIGNMENTSCHEMA_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFTableAlignmentSchema, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFTableAlignmentSchema : NSObject <SFTableAlignmentSchema, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tableColumnAlignment; // ivar: _tableColumnAlignment


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif