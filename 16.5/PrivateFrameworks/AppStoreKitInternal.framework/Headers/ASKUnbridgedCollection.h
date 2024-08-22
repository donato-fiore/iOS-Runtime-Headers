// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASKUNBRIDGEDCOLLECTION_H
#define ASKUNBRIDGEDCOLLECTION_H


#import <Foundation/Foundation.h>


@interface ASKUnbridgedCollection : NSObject

@property (readonly, nonatomic) id *collection; // ivar: _collection


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithCollection:(id)arg0 ;


@end


#endif