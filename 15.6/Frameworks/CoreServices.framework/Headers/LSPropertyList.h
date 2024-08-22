// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSPROPERTYLIST_H
#define LSPROPERTYLIST_H

@class NSString, NSDictionary;
@protocol LSDetachable, NSCopying;

#import <Foundation/Foundation.h>


@interface LSPropertyList : NSObject <LSDetachable, NSCopying>



@property (readonly) NSString *_applicationIdentifier;
@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;


+(id)new;
+(id)propertyListWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)propertyListWithData:(id)arg0 ;
+(id)propertyListWithDictionary:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)objectsForKeys:(id)arg0 ;
-(void)detach;


@end


#endif