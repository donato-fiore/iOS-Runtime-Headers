// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAMESSAGINGDESTINATION_H
#define AAMESSAGINGDESTINATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AAMessagingDestination : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *destination; // ivar: _destination
@property (readonly, nonatomic) NSInteger destinationType; // ivar: _destinationType
@property (readonly, nonatomic) NSString *destinationURI; // ivar: _destinationURI


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEmail:(id)arg0 ;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(void)isRegisteredToiMessageWithCompletion:(id)arg0 ;


@end


#endif