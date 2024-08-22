// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKTREGISTRATIONSTATUSPROVIDER_H
#define IDSKTREGISTRATIONSTATUSPROVIDER_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSKTRegistrationStatusProvider : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *ktApplicationToKTRegStatus; // ivar: _ktApplicationToKTRegStatus


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)statusForKTApplication:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif