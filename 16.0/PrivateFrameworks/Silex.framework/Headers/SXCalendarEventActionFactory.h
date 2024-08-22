// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCALENDAREVENTACTIONFACTORY_H
#define SXCALENDAREVENTACTIONFACTORY_H

@class NSString;
@protocol SXActionFactory, SXDateParser;

#import <Foundation/Foundation.h>


@interface SXCalendarEventActionFactory : NSObject <SXActionFactory>



@property (readonly, nonatomic) NSObject<SXDateParser> *dateParser; // ivar: _dateParser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionForAddition:(id)arg0 ;
-(id)actionForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)actionForURL:(id)arg0 ;
-(id)initWithDateParser:(id)arg0 ;


@end


#endif