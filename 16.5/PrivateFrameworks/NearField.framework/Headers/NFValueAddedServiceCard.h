// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFVALUEADDEDSERVICECARD_H
#define NFVALUEADDEDSERVICECARD_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFValueAddedServiceCard : NSObject <NSSecureCoding>



@property (retain) NSData *data; // ivar: _data
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain) NSData *token; // ivar: _token
@property int type; // ivar: _type
@property BOOL userInterventionRequired; // ivar: _userInterventionRequired


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif