// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSIRILOCATION_H
#define STSIRILOCATION_H

@class NSURL, NSString, NSData;
@protocol AFTranscriptionType;

#import <Foundation/Foundation.h>


@interface STSiriLocation : NSObject <AFTranscriptionType>



@property (copy, nonatomic) NSURL *addressBookID; // ivar: _addressBookID
@property (copy, nonatomic) NSString *addressLabel; // ivar: _addressLabel
@property (copy, nonatomic) NSString *contactName; // ivar: _contactName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *geoResult; // ivar: _geoResult
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif