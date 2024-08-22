// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALALARMMETADATA_H
#define CALALARMMETADATA_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalAlarmMetadata : NSObject <NSSecureCoding>



@property (retain) NSArray *attach; // ivar: _attach
@property (retain) NSArray *attendee; // ivar: _attendee
@property (retain) NSString *description; // ivar: _description
@property (retain) NSString *summary; // ivar: _summary


+(BOOL)supportsSecureCoding;
+(id)metadataWithData:(id)arg0 ;
-(id)dataRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithICSAlarm:(id)arg0 ;
-(void)applyToAlarm:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif