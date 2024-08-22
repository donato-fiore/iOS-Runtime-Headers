// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMDASHAREETOMBSTONE_H
#define REMDASHAREETOMBSTONE_H

@class NSString, NSUUID;
@protocol REMDAChangedIdentifierResult;

#import <Foundation/Foundation.h>


@interface REMDAShareeTombstone : NSObject <REMDAChangedIdentifierResult>



@property (retain, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *objectIdentifier; // ivar: _objectIdentifier
@property (retain, nonatomic) NSUUID *owningListIdentifier; // ivar: _owningListIdentifier
@property (readonly) Class superclass;




@end


#endif