// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMUNDOINDIVIDUALACTION_H
#define EMUNDOINDIVIDUALACTION_H

@class NSURL, ECMessageFlagChange, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMUndoIndividualAction : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSURL *destinationMailboxURL; // ivar: _destinationMailboxURL
@property (retain, nonatomic) ECMessageFlagChange *flagChange; // ivar: _flagChange
@property (retain, nonatomic) NSArray *messageDatabaseIDs; // ivar: _messageDatabaseIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif