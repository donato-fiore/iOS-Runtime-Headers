// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWPERSON_H
#define SWPERSON_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SWPersonIdentity.h"

@interface SWPerson : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *customThumbnailImageData; // ivar: _customThumbnailImageData
@property (retain, nonatomic) SWPersonIdentity *identity; // ivar: _identity
@property (retain, nonatomic) id *slPerson; // ivar: _slPerson


+(BOOL)supportsSecureCoding;
-(id)contact;
-(id)displayName;
-(id)handle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 displayName:(id)arg1 thumbnailImageData:(id)arg2 ;
-(id)initWithHandle:(id)arg0 identity:(id)arg1 displayName:(id)arg2 thumbnailImageData:(id)arg3 ;
-(id)thumbnailImageData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif