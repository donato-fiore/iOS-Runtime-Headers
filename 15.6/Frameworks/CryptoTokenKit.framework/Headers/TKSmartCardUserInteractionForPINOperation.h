// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSMARTCARDUSERINTERACTIONFORPINOPERATION_H
#define TKSMARTCARDUSERINTERACTIONFORPINOPERATION_H

@class NSLocale, NSArray, NSData;
@protocol NSSecureCoding;


#import "TKSmartCardUserInteraction.h"

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding>

 {
    NSLocale *_locale;
}


@property NSUInteger PINCompletion; // ivar: _PINCompletion
@property (retain) NSArray *PINMessageIndices; // ivar: _PINMessageIndices
@property (retain) NSLocale *locale;
@property (retain) NSData *resultData; // ivar: _resultData
@property unsigned short resultSW; // ivar: _resultSW


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif