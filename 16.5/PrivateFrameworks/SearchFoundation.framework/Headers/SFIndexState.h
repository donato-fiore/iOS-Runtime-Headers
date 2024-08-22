// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFINDEXSTATE_H
#define SFINDEXSTATE_H

@class NSString, NSDictionary, NSNumber, NSData;
@protocol SFIndexState, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFIndexState : NSObject <SFIndexState, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *indexedMessageCount; // ivar: _indexedMessageCount
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSNumber *percentAttachmentsIndexed; // ivar: _percentAttachmentsIndexed
@property (copy, nonatomic) NSNumber *percentMessagesIndexed; // ivar: _percentMessagesIndexed
@property (copy, nonatomic) NSNumber *searchIndex; // ivar: _searchIndex
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *totalMessageCount; // ivar: _totalMessageCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif