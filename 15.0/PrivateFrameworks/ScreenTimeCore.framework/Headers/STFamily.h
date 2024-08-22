// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STFAMILY_H
#define STFAMILY_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "STFamilyMember.h"

@interface STFamily : NSObject <NSCopying>



@property (copy, nonatomic) NSString *dataSource; // ivar: _dataSource
@property (retain, nonatomic) STFamilyMember *me; // ivar: _me
@property (copy, nonatomic) NSArray *members; // ivar: _members


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithFamilyCircle:(id)arg0 ;
-(id)initWithMembers:(id)arg0 ;


@end


#endif