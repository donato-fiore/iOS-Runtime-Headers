// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEDIALOGRESPONSE_H
#define IEDIALOGRESPONSE_H

@class NSString, NSDictionary;


#import "IEResponse.h"

@interface IEDialogResponse : IEResponse

@property (retain, nonatomic) NSString *catId; // ivar: _catId
@property (retain, nonatomic) NSDictionary *catParameters; // ivar: _catParameters
@property (retain, nonatomic) NSString *patternId; // ivar: _patternId
@property (retain, nonatomic) NSDictionary *patternParameters; // ivar: _patternParameters
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSDictionary *visualParameters; // ivar: _visualParameters




@end


#endif