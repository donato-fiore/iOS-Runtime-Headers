// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAIL_H
#define CXVOICEMAIL_H

@class NSUUID, NSURL, NSDate, NSString;
@protocol NSSecureCoding, CXCopying;

#import <Foundation/Foundation.h>

#import "CXHandle.h"

@interface CXVoicemail : NSObject <NSSecureCoding, CXCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (copy, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlayed) BOOL played; // ivar: _played
@property (copy, nonatomic) CXHandle *sender; // ivar: _sender
@property (readonly) Class superclass;
@property (nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVoicemail:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif