// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAPIRESULTS_H
#define SFAPIRESULTS_H

@class NSString, NSDictionary, NSArray, NSData;
@protocol SFApiResults, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *flights; // ivar: _flights
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int resultType; // ivar: _resultType
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasResultType;
-(BOOL)hasStatus;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif