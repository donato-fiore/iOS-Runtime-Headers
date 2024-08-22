// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYINCLUDEDPEOPLEINFO_H
#define PXSHAREDLIBRARYINCLUDEDPEOPLEINFO_H

@class NSString, NSPersonNameComponents, PHPerson;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryUIParticipant.h"

@interface PXSharedLibraryIncludedPeopleInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) PXSharedLibraryUIParticipant *participant; // ivar: _participant
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


+(id)personForParticipant:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithParticipant:(id)arg0 person:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParticipant:(id)arg0 ;
-(id)initWithParticipant:(id)arg0 person:(id)arg1 ;
-(id)initWithPerson:(id)arg0 ;


@end


#endif