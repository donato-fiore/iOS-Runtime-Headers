// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAPITRIAGESESSION_H
#define CNAPITRIAGESESSION_H

@protocol CNAPITriageLogger, CNTimeProvider;

#import <Foundation/Foundation.h>

#import "CNContactFetchRequest.h"

@interface CNAPITriageSession : NSObject {
    CGFloat _timeSessionBegan;
    CGFloat _timeSessionEnded;
    CGFloat _clientCalloutTime;
    BOOL _hasClientCalloutTime;
}


@property (readonly) NSObject<CNAPITriageLogger> *logger; // ivar: _logger
@property (readonly) CNContactFetchRequest *request; // ivar: _request
@property (readonly) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider


-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 triageLogger:(id)arg1 timeProvider:(id)arg2 ;
-(id)normalizeCollectionOfContacts:(id)arg0 ;
-(void)addClientCalloutTime:(CGFloat)arg0 ;
-(void)close;
-(void)closeWithContacts:(id)arg0 ;
-(void)closeWithContacts:(id)arg0 orError:(id)arg1 ;
-(void)closeWithError:(id)arg0 ;
-(void)closeWithResult:(id)arg0 ;
-(void)open;


@end


#endif