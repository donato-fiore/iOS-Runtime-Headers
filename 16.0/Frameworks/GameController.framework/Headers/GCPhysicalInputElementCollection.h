// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCPHYSICALINPUTELEMENTCOLLECTION_H
#define GCPHYSICALINPUTELEMENTCOLLECTION_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface GCPhysicalInputElementCollection : NSObject <NSFastEnumeration>



@property (readonly) NSUInteger count;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)elementEnumerator;
-(id)elementForAlias:(id)arg0 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif