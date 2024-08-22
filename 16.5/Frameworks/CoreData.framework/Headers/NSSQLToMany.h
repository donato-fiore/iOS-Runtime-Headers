// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLTOMANY_H
#define NSSQLTOMANY_H



#import "NSSQLRelationship.h"

@interface NSSQLToMany : NSSQLRelationship



-(BOOL)isToMany;
-(id)initWithEntity:(id)arg0 propertyDescription:(id)arg1 ;


@end


#endif