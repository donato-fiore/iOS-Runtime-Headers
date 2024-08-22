// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUPARTICIPANT_H
#define TUPARTICIPANT_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TUSandboxExtendedURL.h"

@interface TUParticipant : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedImageURL; // ivar: _sandboxExtendedImageURL


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParticipant:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif