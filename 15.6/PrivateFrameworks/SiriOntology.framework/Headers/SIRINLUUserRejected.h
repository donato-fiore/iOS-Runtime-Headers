// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUUSERREJECTED_H
#define SIRINLUUSERREJECTED_H

@class NSUUID;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUUserRejected : NSObject <SIRINLUUserDialogAct>



@property (retain, nonatomic) NSUUID *offerId; // ivar: _offerId
@property (retain, nonatomic) USOSerializedGraph *reference; // ivar: _reference


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOfferId:(id)arg0 reference:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif