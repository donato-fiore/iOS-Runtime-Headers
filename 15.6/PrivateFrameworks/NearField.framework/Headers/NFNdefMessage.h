// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFNDEFMESSAGE_H
#define NFNDEFMESSAGE_H

@class NSMutableArray, NSString, NSArray;
@protocol NSSecureCoding, NFNdefMessage;

#import <Foundation/Foundation.h>


@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage>

 {
    NSMutableArray *_records;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *records;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)asData;
-(id)decode;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNDEFMessage:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)addRecordArray:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif