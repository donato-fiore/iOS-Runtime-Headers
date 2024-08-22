// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUSYSTEMOFFERED_H
#define SIRINLUSYSTEMOFFERED_H

@class NSString;
@protocol SIRINLUSystemDialogAct, SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>


@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) NSObject<SIRINLUUserDialogAct> *offeredAct; // ivar: _offeredAct
@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOfferedAct:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif