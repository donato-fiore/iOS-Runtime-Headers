// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSTEXTNDCPARSER_H
#define HKMEDICATIONSTEXTNDCPARSER_H

@class NSArray, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface HKMedicationsTextNDCParser : NSObject

@property (retain, nonatomic) NSArray *NDC10RegularExpressions; // ivar: _NDC10RegularExpressions
@property (retain, nonatomic) NSRegularExpression *NDC11RegularExpression; // ivar: _NDC11RegularExpression


-(id)init;
-(id)parsedNDCCodeFromString:(id)arg0 ;


@end


#endif