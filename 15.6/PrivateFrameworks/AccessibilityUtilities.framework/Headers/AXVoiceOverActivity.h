// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXVOICEOVERACTIVITY_H
#define AXVOICEOVERACTIVITY_H

@class NSSet, NSNumber, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXVoiceOverActivity : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSSet *appIdentifiers; // ivar: _appIdentifiers
@property (retain, nonatomic) NSNumber *audioDucking; // ivar: _audioDucking
@property (retain, nonatomic) NSNumber *brailleAutoAdvanceDuration; // ivar: _brailleAutoAdvanceDuration
@property (retain, nonatomic) NSNumber *brailleInput; // ivar: _brailleInput
@property (retain, nonatomic) NSNumber *brailleOutput; // ivar: _brailleOutput
@property (retain, nonatomic) NSNumber *brailleStatusCellGeneral; // ivar: _brailleStatusCellGeneral
@property (retain, nonatomic) NSNumber *brailleStatusCellText; // ivar: _brailleStatusCellText
@property (retain, nonatomic) NSString *brailleTable; // ivar: _brailleTable
@property (nonatomic) BOOL builtIn; // ivar: _builtIn
@property (retain, nonatomic) NSNumber *containerFeedback; // ivar: _containerFeedback
@property (retain, nonatomic) NSNumber *hints; // ivar: _hints
@property (retain, nonatomic) NSNumber *imageDescriptions; // ivar: _imageDescriptions
@property (retain, nonatomic) NSNumber *modifierKeys; // ivar: _modifierKeys
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *numberFeedback; // ivar: _numberFeedback
@property (retain, nonatomic) NSUUID *punctuationGroup; // ivar: _punctuationGroup
@property (retain, nonatomic) NSNumber *soundMuted; // ivar: _soundMuted
@property (retain, nonatomic) NSNumber *speakEmojis; // ivar: _speakEmojis
@property (retain, nonatomic) NSNumber *speechMuted; // ivar: _speechMuted
@property (retain, nonatomic) NSNumber *speechRate; // ivar: _speechRate
@property (retain, nonatomic) NSNumber *tableHeaders; // ivar: _tableHeaders
@property (retain, nonatomic) NSNumber *tableRowAndColumn; // ivar: _tableRowAndColumn
@property (retain, nonatomic) NSSet *textualContexts; // ivar: _textualContexts
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSString *voiceIdentifier; // ivar: _voiceIdentifier
@property (retain, nonatomic) NSNumber *volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)observerKeys;
-(BOOL)identicalProperty:(id)arg0 property2:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdenticalTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif