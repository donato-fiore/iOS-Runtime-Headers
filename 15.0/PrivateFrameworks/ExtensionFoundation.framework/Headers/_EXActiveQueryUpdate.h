// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXACTIVEQUERYUPDATE_H
#define _EXACTIVEQUERYUPDATE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXActiveQueryUpdate : NSObject <NSSecureCoding>



@property (readonly) NSSet *addedExtensions; // ivar: _addedExtensions
@property (readonly) NSSet *removedUUIDs; // ivar: _removedUUIDs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAddedExtensions:(id)arg0 removedUUIDs:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentExtensions:(id)arg0 updatedExtensions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif