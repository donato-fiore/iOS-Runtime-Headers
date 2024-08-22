// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMURLATTACHMENT_H
#define REMURLATTACHMENT_H

@class NSData, NSURL;


#import "REMAttachment.h"

@interface REMURLAttachment : REMAttachment

@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(id)_deepCopy;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 url:(id)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif