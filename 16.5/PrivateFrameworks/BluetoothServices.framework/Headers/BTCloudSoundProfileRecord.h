// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTCLOUDSOUNDPROFILERECORD_H
#define BTCLOUDSOUNDPROFILERECORD_H

@class NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTCloudSoundProfileRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *soundProfileData; // ivar: _soundProfileData
@property (retain, nonatomic) NSURL *soundProfileFileURL; // ivar: _soundProfileFileURL


+(BOOL)supportsSecureCoding;
+(id)soundProfileRecordWithCustomData:(id)arg0 ;
+(id)soundProfileRecordWithFileURL:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomData:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif