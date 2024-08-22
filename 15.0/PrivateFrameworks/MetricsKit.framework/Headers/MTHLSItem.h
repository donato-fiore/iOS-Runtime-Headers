// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTHLSITEM_H
#define MTHLSITEM_H

@class NSString, NSArray;
@protocol MTMediaPlaylistItem;

#import <Foundation/Foundation.h>


@interface MTHLSItem : NSObject <MTMediaPlaylistItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger overallPosition;
@property (nonatomic) NSUInteger startOverallPosition; // ivar: _startOverallPosition
@property (nonatomic) NSUInteger startPosition; // ivar: _startPosition
@property (readonly) Class superclass;


+(id)comparator:(SEL)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithStartOverallPosition:(NSUInteger)arg0 metricsData:(id)arg1 ;


@end


#endif