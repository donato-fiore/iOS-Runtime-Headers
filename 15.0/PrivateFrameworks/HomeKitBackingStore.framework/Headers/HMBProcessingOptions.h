// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBPROCESSINGOPTIONS_H
#define HMBPROCESSINGOPTIONS_H

@class HMFObject, HMFActivity, NSString, NSDictionary, NSUUID;
@protocol NSSecureCoding;



@interface HMBProcessingOptions : HMFObject <NSSecureCoding>



@property (retain, nonatomic) HMFActivity *activity; // ivar: _activity
@property (nonatomic) BOOL disallowsCellularAccessForMirrorOutput; // ivar: _disallowsCellularAccessForMirrorOutput
@property BOOL disallowsModelCreation; // ivar: _disallowsModelCreation
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *messageName; // ivar: _messageName
@property (retain, nonatomic) NSDictionary *messagePayload; // ivar: _messagePayload
@property (copy, nonatomic) id *messageResponseHandler; // ivar: _messageResponseHandler
@property (retain, nonatomic) NSUUID *messageTransactionIdentifier; // ivar: _messageTransactionIdentifier
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property BOOL requiresModelCreation; // ivar: _requiresModelCreation
@property (nonatomic) BOOL shouldEnqueueMirrorOutput; // ivar: _shouldEnqueueMirrorOutput
@property (nonatomic) BOOL shouldRollBackIfMirrorOutputFails; // ivar: _shouldRollBackIfMirrorOutputFails
@property (nonatomic) NSUInteger transactionItemsBatchLimit; // ivar: _transactionItemsBatchLimit


+(BOOL)supportsSecureCoding;
+(id)optionsWithLabel:(id)arg0 ;
+(id)optionsWithMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif