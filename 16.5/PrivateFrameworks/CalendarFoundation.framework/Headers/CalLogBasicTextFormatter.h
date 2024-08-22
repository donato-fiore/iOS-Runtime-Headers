// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLOGBASICTEXTFORMATTER_H
#define CALLOGBASICTEXTFORMATTER_H

@class NSDateFormatter, NSString;
@protocol CalLogFormatter;

#import <Foundation/Foundation.h>


@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>



@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeEnvelopePartNames; // ivar: _includeEnvelopePartNames
@property (nonatomic) BOOL includeFunction; // ivar: _includeFunction
@property (nonatomic) BOOL includeLevel; // ivar: _includeLevel
@property (nonatomic) BOOL includeLogName; // ivar: _includeLogName
@property (nonatomic) BOOL includeMachPort; // ivar: _includeMachPort
@property (nonatomic) BOOL includeMessage; // ivar: _includeMessage
@property (nonatomic) BOOL includeProcessID; // ivar: _includeProcessID
@property (nonatomic) BOOL includeProcessName; // ivar: _includeProcessName
@property (nonatomic) BOOL includeTimestamp; // ivar: _includeTimestamp
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompactForm; // ivar: _useCompactForm
@property (nonatomic) BOOL usePrettyTimestamp; // ivar: _usePrettyTimestamp
@property (nonatomic) BOOL useTinyEnvelopePartNames; // ivar: _useTinyEnvelopePartNames


-(id)init;
-(id)newFormattedString:(id)arg0 ;


@end


#endif