// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHAREBACKSUGGESTERINPUT_H
#define PGSHAREBACKSUGGESTERINPUT_H

@class PHAsset, NSDate, NSString, CLLocation, NSTimeZone;
@protocol PGShareBackSuggesterInputProtocol;

#import <Foundation/Foundation.h>


@interface PGShareBackSuggesterInput : NSObject <PGShareBackSuggesterInputProtocol>



@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)localDateIntervalForSuggesterInputs:(id)arg0 withTimeIntervalPadding:(CGFloat)arg1 ;
+(id)suggesterInputsWithDictionaries:(id)arg0 ;
+(id)universalDateIntervalForSuggesterInputs:(id)arg0 withTimeIntervalPadding:(CGFloat)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif