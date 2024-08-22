// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTQUERYRESULTGUARDEDDATA_H
#define PPCONTACTQUERYRESULTGUARDEDDATA_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface PPContactQueryResultGuardedData : NSObject

@property (retain, nonatomic) NSArray *cnContacts; // ivar: _cnContacts
@property (retain, nonatomic) NSArray *fiaContacts; // ivar: _fiaContacts
@property (nonatomic) BOOL joined; // ivar: _joined
@property (retain, nonatomic) NSError *latestError; // ivar: _latestError




@end


#endif