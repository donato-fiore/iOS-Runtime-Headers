// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVMESSAGEPARSER_H
#define MSVMESSAGEPARSER_H

@class NSMutableData;
@protocol MSVMessageParserDelegate;

#import <Foundation/Foundation.h>


@interface MSVMessageParser : NSObject

@property (weak, nonatomic) NSObject<MSVMessageParserDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger unhandledObjectDataExpectedLength; // ivar: _unhandledObjectDataExpectedLength
@property (retain, nonatomic) NSMutableData *unhandledPartialData; // ivar: _unhandledPartialData
@property (retain, nonatomic) NSMutableData *unhandledPartialObjectData; // ivar: _unhandledPartialObjectData


+(id)createHeader:(NSUInteger)arg0 ;
-(void)_notifyDelegate:(id)arg0 ;
-(void)processData:(id)arg0 ;


@end


#endif