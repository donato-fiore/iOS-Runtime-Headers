// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPECONDITION_H
#define PLLIBRARYSCOPECONDITION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLLibraryScopeCondition : NSObject <NSCopying>



@property (nonatomic) unsigned char criteria; // ivar: _criteria
@property (readonly, nonatomic) unsigned char type;


+(BOOL)supportsQueryKey:(int)arg0 ;
+(id)conditionWithSingleQueries:(id)arg0 criteria:(unsigned char)arg1 ;
+(void)_abortIfCalledOnBaseClass;
-(id)conditionQuery;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCriteria:(unsigned char)arg0 ;
-(id)query;


@end


#endif