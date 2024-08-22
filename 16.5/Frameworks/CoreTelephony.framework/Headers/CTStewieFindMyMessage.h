// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEFINDMYMESSAGE_H
#define CTSTEWIEFINDMYMESSAGE_H

@class NSString, NSData;
@protocol CTStewieMessageOutgoing;

#import <Foundation/Foundation.h>


@interface CTStewieFindMyMessage : NSObject <CTStewieMessageOutgoing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFindMyMessage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif