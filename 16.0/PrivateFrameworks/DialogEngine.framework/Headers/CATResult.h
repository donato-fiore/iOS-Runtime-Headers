// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATRESULT_H
#define CATRESULT_H

@class NSArray, NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface CATResult : NSObject

@property (retain, nonatomic) NSArray *captionPrint; // ivar: _captionPrint
@property (retain, nonatomic) NSArray *captionSpeak; // ivar: _captionSpeak
@property (retain, nonatomic) NSString *catId; // ivar: _catId
@property (retain, nonatomic) NSArray *dialogId; // ivar: _dialogId
@property (retain, nonatomic) NSDictionary *meta; // ivar: _meta
@property (retain, nonatomic) NSArray *print; // ivar: _print
@property (retain, nonatomic) NSArray *printOnly; // ivar: _printOnly
@property (retain, nonatomic) NSArray *speak; // ivar: _speak
@property (retain, nonatomic) NSArray *spokenOnly; // ivar: _spokenOnly
@property (retain, nonatomic) NSArray *spokenOnlyDefined; // ivar: _spokenOnlyDefined
@property (retain, nonatomic) NSString *visualId; // ivar: _visualId
@property (retain, nonatomic) NSDictionary *visualParameters; // ivar: _visualParameters
@property (retain, nonatomic) NSData *visualResponse; // ivar: _visualResponse




@end


#endif