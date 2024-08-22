// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANALYTICSCOUNTER_H
#define ANANALYTICSCOUNTER_H


#import <Foundation/Foundation.h>


@interface ANAnalyticsCounter : NSObject

@property (nonatomic) unsigned int count; // ivar: _count
@property (nonatomic) NSUInteger hexCount; // ivar: _hexCount


-(id)init;
-(id)initWithHexCount:(NSUInteger)arg0 ;
-(id)payload:(id)arg0 keyTwo:(id)arg1 ;
-(void)append:(NSUInteger)arg0 ;
-(void)finished;


@end


#endif