// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUUSERACKNOWLEDGED_H
#define SIRINLUUSERACKNOWLEDGED_H

@class NSUUID;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUUserAcknowledged : NSObject <SIRINLUUserDialogAct>



@property (retain, nonatomic) USOSerializedGraph *reference; // ivar: _reference
@property (retain, nonatomic) NSUUID *systemDialogActId; // ivar: _systemDialogActId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemDialogActId:(id)arg0 reference:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif