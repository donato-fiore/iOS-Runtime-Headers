// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNRSTRINGSFILEREADERRESULT_H
#define PNRSTRINGSFILEREADERRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PNRStringsFileReaderResult : NSObject

@property (retain, nonatomic) NSString *city; // ivar: _city
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSString *region; // ivar: _region
@property (readonly, nonatomic) NSInteger score;


+(NSInteger)maxPossibleScore;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isPlaceHolderForEmpty;
-(BOOL)shouldOrderCityFirstForLanguage:(id)arg0 phoneNumberInCC:(id)arg1 ;
-(id)aggregateStringWhileInCountry:(id)arg0 forLanguage:(id)arg1 ccOfNumber:(id)arg2 ;
-(id)initWithCountry:(id)arg0 region:(id)arg1 city:(id)arg2 ;
-(id)separatorForLanguage:(id)arg0 ;


@end


#endif