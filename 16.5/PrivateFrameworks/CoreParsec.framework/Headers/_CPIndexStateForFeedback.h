// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPINDEXSTATEFORFEEDBACK_H
#define _CPINDEXSTATEFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPIndexStateForFeedback, NSSecureCoding;



@interface _CPIndexStateForFeedback : PBCodable <_CPIndexStateForFeedback, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int indexedMessageCount; // ivar: _indexedMessageCount
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int percentAttachmentsIndexed; // ivar: _percentAttachmentsIndexed
@property (nonatomic) int percentMessagesIndexed; // ivar: _percentMessagesIndexed
@property (nonatomic) int searchIndex; // ivar: _searchIndex
@property (readonly) Class superclass;
@property (nonatomic) int totalMessageCount; // ivar: _totalMessageCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif