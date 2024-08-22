// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBFILESYSTEMSNAPSHOT_H
#define MBFILESYSTEMSNAPSHOT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MBFileSystemSnapshot : NSObject

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(id)description;
-(id)initWithName:(id)arg0 uuid:(id)arg1 creationDate:(id)arg2 ;


@end


#endif