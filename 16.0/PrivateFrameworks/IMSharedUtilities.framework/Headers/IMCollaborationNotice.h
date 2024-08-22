// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOLLABORATIONNOTICE_H
#define IMCOLLABORATIONNOTICE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "IMCollaborationNoticeMetadata.h"

@interface IMCollaborationNotice : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *guidString; // ivar: _guidString
@property (retain, nonatomic) IMCollaborationNoticeMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *senderHandle; // ivar: _senderHandle


+(BOOL)supportsSecureCoding;
+(id)noticeWithGUIDString:(id)arg0 sender:(id)arg1 metadata:(id)arg2 date:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsEphemeralDismissal;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGUIDString:(id)arg0 sender:(id)arg1 metadata:(id)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif