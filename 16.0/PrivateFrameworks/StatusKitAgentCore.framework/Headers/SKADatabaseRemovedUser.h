// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKADATABASEREMOVEDUSER_H
#define SKADATABASEREMOVEDUSER_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface SKADatabaseRemovedUser : NSObject

@property (readonly, nonatomic) NSDate *dateRemoved; // ivar: _dateRemoved
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier


-(id)initWithCoreDataRemovedUser:(id)arg0 ;
-(id)initWithHandle:(id)arg0 statusTypeIdentifier:(id)arg1 presenceIdentifier:(id)arg2 dateRemoved:(id)arg3 ;


@end


#endif