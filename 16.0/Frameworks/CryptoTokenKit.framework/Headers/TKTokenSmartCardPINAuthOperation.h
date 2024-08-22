// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENSMARTCARDPINAUTHOPERATION_H
#define TKTOKENSMARTCARDPINAUTHOPERATION_H

@class NSData, NSString;


#import "TKTokenAuthOperation.h"
#import "TKSmartCardPINFormat.h"
#import "TKSmartCard.h"

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation

@property (copy) NSData *APDUTemplate; // ivar: _APDUTemplate
@property (copy) NSString *PIN; // ivar: _PIN
@property NSInteger PINByteOffset; // ivar: _PINByteOffset
@property (retain) TKSmartCardPINFormat *PINFormat; // ivar: _PINFormat
@property (copy) NSString *localizedPINLabel; // ivar: _localizedPINLabel
@property (retain) TKSmartCard *smartCard; // ivar: _smartCard


+(BOOL)supportsSecureCoding;
-(BOOL)finishWithError:(*id)arg0 ;
-(Class)baseClassForUI;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)importOperation:(id)arg0 ;


@end


#endif