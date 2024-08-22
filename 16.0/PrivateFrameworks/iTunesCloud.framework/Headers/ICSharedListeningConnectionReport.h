// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSHAREDLISTENINGCONNECTIONREPORT_H
#define ICSHAREDLISTENINGCONNECTIONREPORT_H

@class NSMapTable, NSString, NSMutableArray;
@protocol MSVQRConnectionReportProtocol;

#import <Foundation/Foundation.h>


@interface ICSharedListeningConnectionReport : NSObject <MSVQRConnectionReportProtocol>



@property (retain, nonatomic) NSMapTable *allEvents; // ivar: _allEvents
@property (readonly, nonatomic) id *analyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedReport;
@property (copy, nonatomic) NSString *groupSessionIdentifier; // ivar: _groupSessionIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sharedListeningSessionIdentifier; // ivar: _sharedListeningSessionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *topLevelEvents; // ivar: _topLevelEvents


-(id)init;
-(void)_addEvents:(id)arg0 toReportString:(id)arg1 eventLevel:(NSInteger)arg2 ;
-(void)endEvent:(id)arg0 ;
-(void)endEvent:(id)arg0 withError:(id)arg1 ;
-(void)startEvent:(id)arg0 ;
-(void)startEvent:(id)arg0 withParentEvent:(id)arg1 ;


@end


#endif