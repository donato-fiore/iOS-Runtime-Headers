// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYRECORDSYNC_H
#define TITYPOLOGYRECORDSYNC_H



#import "TITypologyRecord.h"
#import "TIKeyboardConfiguration.h"
#import "TIKeyboardState.h"

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // ivar: _keyboardConfig
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState


+(BOOL)supportsSecureCoding;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(id)textSummary;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif