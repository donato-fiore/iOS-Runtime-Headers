// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGOUTPUT_H
#define SGOUTPUT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGOutput : NSObject

@property (readonly, nonatomic) NSArray *exceptionTemplates; // ivar: _exceptionTemplates
@property (readonly, nonatomic) NSDictionary *jsMessageLogs; // ivar: _jsMessageLogs
@property (readonly, nonatomic) NSArray *outputItems; // ivar: _outputItems
@property (readonly, nonatomic) NSDictionary *sourceMetadata; // ivar: _sourceMetadata


-(id)initWithOutputItems:(id)arg0 exeptionTemplates:(id)arg1 jsMessageLogs:(id)arg2 ;
-(id)initWithOutputItems:(id)arg0 sourceMetadata:(id)arg1 exeptionTemplates:(id)arg2 jsMessageLogs:(id)arg3 ;


@end


#endif