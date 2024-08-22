// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIALOGELEMENT_H
#define DIALOGELEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DialogElement : NSObject

@property (retain, nonatomic) NSString *fullPrint; // ivar: _fullPrint
@property (retain, nonatomic) NSString *fullSpeak; // ivar: _fullSpeak
@property (retain, nonatomic) NSString *id; // ivar: _id
@property (nonatomic) BOOL printOnly; // ivar: _printOnly
@property (nonatomic) BOOL spokenOnly; // ivar: _spokenOnly
@property (retain, nonatomic) NSString *supportingPrint; // ivar: _supportingPrint
@property (retain, nonatomic) NSString *supportingSpeak; // ivar: _supportingSpeak




@end


#endif