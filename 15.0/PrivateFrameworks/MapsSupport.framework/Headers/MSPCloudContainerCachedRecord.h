// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCLOUDCONTAINERCACHEDRECORD_H
#define MSPCLOUDCONTAINERCACHEDRECORD_H

@class NSData, CKRecord;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPCloudContainerCachedRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *contentsHash; // ivar: _contentsHash
@property (retain, nonatomic) NSData *positionHash; // ivar: _positionHash
@property (retain, nonatomic) CKRecord *record; // ivar: _record


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToCloudRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif