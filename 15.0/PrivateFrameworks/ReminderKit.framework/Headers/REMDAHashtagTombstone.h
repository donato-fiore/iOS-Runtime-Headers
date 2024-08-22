// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMDAHASHTAGTOMBSTONE_H
#define REMDAHASHTAGTOMBSTONE_H

@class NSString, NSUUID;
@protocol REMDAChangedIdentifierResult;

#import <Foundation/Foundation.h>


@interface REMDAHashtagTombstone : NSObject <REMDAChangedIdentifierResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *objectIdentifier; // ivar: _objectIdentifier
@property (retain, nonatomic) NSUUID *reminderIdentifier; // ivar: _reminderIdentifier
@property (readonly) Class superclass;




@end


#endif