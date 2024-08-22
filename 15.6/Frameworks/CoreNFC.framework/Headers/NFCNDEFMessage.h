// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCNDEFMESSAGE_H
#define NFCNDEFMESSAGE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFCNDEFMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger length;
@property (copy, nonatomic) NSArray *records; // ivar: _records


+(BOOL)_validateRecords:(id)arg0 fromOriginal:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_getPayloadsFromNDEFRecords:(id)arg0 ;
+(id)ndefMessageWithData:(id)arg0 ;
-(id)_getURLsFromNDEFMessage:(id)arg0 ;
-(id)_initWithRecords:(id)arg0 ;
-(id)asData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmptyNdefMessage;
-(id)initWithNDEFRecords:(id)arg0 ;
-(id)initWithNFNdefMessage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif