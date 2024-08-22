// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPREVIEWSECTION_H
#define EKPREVIEWSECTION_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface EKPreviewSection : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSArray *events; // ivar: _events


+(id)sectionWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(void)addEvent:(id)arg0 ;


@end


#endif