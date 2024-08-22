// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANALYTICSDAILYANNOUNCEMENTS_H
#define ANANALYTICSDAILYANNOUNCEMENTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ANAnalyticsDailyAnnouncements : NSObject

@property (retain, nonatomic) NSMutableDictionary *homes; // ivar: _homes
@property (nonatomic) CGFloat lastAccess; // ivar: _lastAccess


-(BOOL)shouldReport;
-(NSUInteger)announcementsCount;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithLastAccess:(CGFloat)arg0 ;
-(void)incrementCountInHome:(id)arg0 group:(id)arg1 ;
-(void)merge:(id)arg0 ;


@end


#endif