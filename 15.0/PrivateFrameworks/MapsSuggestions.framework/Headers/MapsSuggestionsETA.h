// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSETA_H
#define MAPSSUGGESTIONSETA_H

@class NSString, CLLocation, NSDate;
@protocol NSSecureCoding, NSCopying, MapsSuggestionsJSONable;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying, MapsSuggestionsJSONable>



@property (readonly, nonatomic) CGFloat age;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSString *longTrafficString; // ivar: _longTrafficString
@property (readonly, nonatomic) NSString *originator; // ivar: _originator
@property (readonly, nonatomic) CGFloat seconds; // ivar: _seconds
@property (readonly, nonatomic) NSString *shortTrafficString; // ivar: _shortTrafficString
@property (readonly, nonatomic) NSString *spokenRouteName; // ivar: _spokenRouteName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *time; // ivar: _time
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSString *writtenRouteName; // ivar: _writtenRouteName


+(BOOL)supportsSecureCoding;
+(id)ETAWithData:(id)arg0 ;
-(BOOL)isBetterThanETA:(id)arg0 requirements:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToETA:(id)arg0 ;
-(BOOL)isValidForLocation:(id)arg0 requirements:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeconds:(CGFloat)arg0 shortTrafficString:(id)arg1 longTrafficString:(id)arg2 writtenRouteName:(id)arg3 spokenRouteName:(id)arg4 transportType:(int)arg5 location:(id)arg6 time:(id)arg7 ;
-(id)initWithSeconds:(CGFloat)arg0 shortTrafficString:(id)arg1 longTrafficString:(id)arg2 writtenRouteName:(id)arg3 spokenRouteName:(id)arg4 transportType:(int)arg5 location:(id)arg6 time:(id)arg7 originator:(id)arg8 ;
-(id)initWithSeconds:(CGFloat)arg0 trafficString:(id)arg1 transportType:(int)arg2 location:(id)arg3 ;
-(id)nameForJSON;
-(id)objectForJSON;
-(id)trafficString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif