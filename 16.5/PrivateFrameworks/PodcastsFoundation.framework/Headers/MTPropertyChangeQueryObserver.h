// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPROPERTYCHANGEQUERYOBSERVER_H
#define MTPROPERTYCHANGEQUERYOBSERVER_H

@class NSArray;


#import "MTAllPropertyChangesQueryObserver.h"

@interface MTPropertyChangeQueryObserver : MTAllPropertyChangesQueryObserver

@property (retain, nonatomic) NSArray *propertyKeys;


+(Class)fetchedResultsControllerClass;
-(id)_frc;


@end


#endif