// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDGENERICMESSAGE_H
#define FMDGENERICMESSAGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDGenericMessage : NSObject <NSSecureCoding>



@property (nonatomic) int soundDuration; // ivar: _soundDuration
@property (retain, nonatomic) NSString *soundName; // ivar: _soundName
@property (nonatomic) BOOL vibrate; // ivar: _vibrate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif