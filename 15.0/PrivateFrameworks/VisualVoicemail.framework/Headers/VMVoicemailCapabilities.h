// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMVOICEMAILCAPABILITIES_H
#define VMVOICEMAILCAPABILITIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled; // ivar: _transcriptionEnabled


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilities:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCapabilities:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTranscriptionEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif